#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	buff;

	s = (char *)src;
	d = dest;
	buff = 0;
	if (!src || !dest)
		return (0);
	if (ft_strlen(src) > ft_strlen((const char *)dest) || size == 0)
		return (ft_strlen(src));
	while (*s && (size - 1) > 0)
	{
		*d++ = *s++;
		size--;
		buff++;
	}
	buff += ft_strlen(s);
	*d = '\0';
	return (buff);
}
