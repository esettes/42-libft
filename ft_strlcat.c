#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	j;

	dest_len = 0;
	src_len = ft_strlen(src);
	while (dest_len < size && dest[dest_len])
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	j = 0;
	while (dest_len + j < (size - 1) && src[j])
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
