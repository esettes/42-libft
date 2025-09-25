#include "libft.h"
/**
 * @brief same as memcpy but handling cases when source and destination
 * addresses are overlapping 
 * 
 * @param void dest
 * @param void src
 * @param size_t bytes
 */
void	ft_memmove(void *dest, const void *src, size_t bytes)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest || !src)
		return ;
	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d > s)
	{
		while (bytes--)
			d[bytes] = s[bytes];
	}
	else
	{
		while (bytes--)
		{
			d[i] = s[i];
			i++;
		}
	}
}
