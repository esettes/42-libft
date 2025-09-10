#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	buff;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	buff = 0;
	if (ft_strlen(src) > ft_strlen(dest))
		return (ft_strlen(src));
	while ((size - 1) > 0 && *s)
	{
		*d++ = *s++;
		size--;
		buff++;
	}
	*d = '\0';
	return (buff);
}
