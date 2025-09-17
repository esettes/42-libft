#include "libft.h"

/**
 * @brief used to copy a block of data from a source address to a 
 * destination address.
 * 
 * @param void dest
 * @param void src
 * @param size_t bytes
 */
void	*ft_memcpy(void *dest, const void *src, size_t bytes)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest || !src)
		return (NULL);
	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < bytes)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
