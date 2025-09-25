#include "libft.h"

/**
 * Find the first occurrence of the character c
 * in the string pointed to by the argument str.
 */
char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s && *s != c)
		s++;
	if (*s == c)
		return (s);
	return (NULL);
}
