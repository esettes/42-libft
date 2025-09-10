#include "libft.h"

/**
 * @brief erases the data in the n bytes of the memory starting at the location
 * pointed to by s, by writing zeros (bytes containing '\0') to that area.
 * 
 * @param size_t n Number of bytes to set to 0.
 * @param void *s Pointer to first location to fill.
 */
void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
