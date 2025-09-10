#include "libft.h"

/**
 * Ft_memset() takes a pointer to a memory location, a value to set, and the number of bytes to set,
 * and returns a pointer to the memory location
 * 
 * @param void p This is the pointer to the memory area to be filled.
 * @param int val the value to be set
 * @param size_t bytes The number of bytes to be set to the value c.
 * 
 * @return A pointer to the memory area s.
 */
void	*ft_memset(void *p, int val, size_t bytes)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = p;
	while (i < bytes)
	{
		s[i] = (unsigned char)val;
		i++;
	}
	return (p);
}