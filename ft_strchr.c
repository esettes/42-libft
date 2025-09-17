#include "libft.h"

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
