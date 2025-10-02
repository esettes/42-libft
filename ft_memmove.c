/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstancu <rstancu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-01 10:39:53 by rstancu           #+#    #+#             */
/*   Updated: 2025-10-01 10:39:53 by rstancu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief same as memcpy but handling cases when source and destination
 * addresses are overlapping 
 * 
 * @param void dest
 * @param void src
 * @param size_t n
 */
// ...existing code...
void	*ft_memmove(void *dest, const void *src, size_t n)
{
    const unsigned char	*s;
    unsigned char		*d;

    if (!dest && !src)
        return (NULL);
    s = (const unsigned char *)src;
    d = (unsigned char *)dest;
    if (s == d || n == 0)
        return (dest);
    // Si dest > src (regiones se pueden solapar con dest en zona superior) copiar hacia atrás
    if (d > s && d < s + n)
    {
        s += n;
        d += n;
        while (n--)
            *--d = *--s;
    }
    else
    {
        while (n--)
            *d++ = *s++;
    }
    return (dest);
}

// ...existing code...
__attribute__((weak))
int	main(void)
{
	char *greed;
	char	*ptr;
	size_t	len;

	len = 20;
	greed = malloc(100);
	ptr = ft_memmove(greed + 5, greed, 10);
 	printf("ptr: %p\n", ptr);
	return (0);
}
