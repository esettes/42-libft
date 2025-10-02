/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstancu <rstancu@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-01 10:39:14 by rstancu           #+#    #+#             */
/*   Updated: 2025-10-01 10:39:14 by rstancu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ...existing code...
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    const char	*s = src;
    char		*d = dst;
    size_t		n = size;
    size_t		dlen;
    size_t		slen;

    /* Find current length of dst within size limit */
    while (n && *d)
    {
        d++;
        n--;
    }
    dlen = (size_t)(d - dst);
    slen = ft_strlen(s);
    if (n == 0)
        return (dlen + slen);
    /* Space left (excluding null terminator) */
    n--; 
    while (n && *s)
    {
        *d++ = *s++;
        n--;
    }
    *d = '\0';
    return (dlen + slen);
}