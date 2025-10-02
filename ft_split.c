/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstancu <rstancu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-01 10:36:44 by rstancu           #+#    #+#             */
/*   Updated: 2025-10-01 10:36:44 by rstancu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_mem(void **tab, int k)
{
	while (k > 0)
		free(tab[k--]);
	free(tab);
	return (NULL);
}

int	get_num_words(char const *s, char c)
{
	int	i;
	int	check;
	int	words;

	i = 0;
	check = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && check == 0)
		{
			words++;
			check = 1;
		}
		if (s[i] == c)
			check = 0;
		
		i++;
	}
	return (words);
}

static void	*save_word(char const *s, size_t start, size_t end)
{
	size_t	j;
	char	*str;
	char	*b;

	j = 0;
	str = malloc(sizeof(char) * (end - start + 1));
	b = (char *)s;
	if (!str)
		return (NULL);
	while (start < end)
		str[j++] = b[start++];
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s1, char c)
{
	char **ret;
	int	i;
	int	start;
	int	k;

	ret = malloc(sizeof(char *) * (get_num_words(s1, c) + 1));
	if (!ret)
		return (NULL);
	i = -1;
	start = 0;
	k = 0;
	while (s1[++i] && k < get_num_words(s1, c))
	{
		if (s1[i] != c)
		{
			start = i;
			while (s1[i] && s1[i] != c)
				i++;
			ret[k++] = save_word(s1, start, i);
			if (!ret[k - 1])
				return (free_mem((void **)ret, k - 1));
		}
	}
	ret[k] = NULL;
	return (ret);
}

__attribute__((weak))
int main(int ac, char **av)
{
	char **tab;
	int i;

	(void)ac;
	tab = ft_split(av[1], av[2][0]);
	i = 0;
	while (tab[i])
	{
		printf("[%s]\n", tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (0);
}
