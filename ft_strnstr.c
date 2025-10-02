/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstancu <rstancu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-01 10:36:52 by rstancu           #+#    #+#             */
/*   Updated: 2025-10-01 10:36:52 by rstancu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * locates the first occurrence of the  null-terminated string little in the
 * string big, where not more than len characters are searched.
 * 
 * @return If little is an empty string, big is returned; if little	occurs
 * nowhere in big, NULL is returned; otherwise a pointer to the first character
 * of the first occurrence of little is returned
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	i = -1;
	aux = len;
	if (!little)
		return ((char *)big);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[++i] && aux)
	{
		j = 0;
		aux = len - i;
		if (big[i] == little[j])
		{
			while (little[j] && big[j + i] && (big[i + j] == little[j]) && aux)
			{
				j++;
				aux--;
			}
			if (!little[j])
				return ((char *)&big[i]);
		}
	}
	return (NULL);
}
