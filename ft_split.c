#include "libft.h"

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
		if (s[i] && s[i] == c && check == 0)
		{
			words++;
			check = 1;
		}
		if (s[i] && s[i] != c && check == 1)
		{
			check = 0;
		}
		i++;
	}
	if (s[i - 1] != c)
	{
		words++;
	}
	return (words);
}

char	**ft_split(char const *s1, char c)
{
	char **ret;
	int	i;
	int	start;
	int	k;

	ret = malloc(sizeof(char *) * get_num_words(s1, c) + 1);
	printf("num words = %d\n", get_num_words(s1, c));
	if (!ret)
		return (NULL);
	i = 0;
	start = 0;
	k = 0;
	while (s1[i] && k < get_num_words(s1, c))
	{
		if (s1[i] != c)
		{
			while (s1[i] != c)
				i++;
			printf("i = %d, start = %d\n", i, start);
			printf("s[i] = %c\n", s1[i]);
			printf("k = %d\n", k);
			ret[k++] = ft_substr(s1, start, i + 1 - start);
			printf("ret[%d] = %s\n", k - 1, ret[k - 1]);
			if (!ret[k - 1])
			{
				while (k-- > 0)
					free(ret[k]);
				free(ret);
				return (NULL);
			}
			start = i + 1;
		}
		i++;
	}
	ret[k] = NULL;
	return (ret);
}

int main(int ac, char **av)
{
	char **tab;
	int i;

	(void)ac;
	tab = ft_split(av[1], av[2][0]);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}