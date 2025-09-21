#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (NULL);
}

/**
 * 1u enssures unsigned 1
 * (b & (1u << k)) to read each bit
 */
static void str_to_bits8(unsigned char b, char out[10], int use_underscore)
{
    int j = 0;
    for (int k = 7; k >= 0; --k) {
        out[j++] = (b & (1u << k)) ? '1' : '0';
        if (use_underscore && k == 4) out[j++] = ' ';
    }
    out[j] = '\0';
}

int	ft_print_bits(const void *s1, const void *s2, size_t n)
{
	const unsigned	*a = (const unsigned char *)s1;
	const unsigned	*b = (const unsigned char *)s2;
	size_t			i = 0;
	unsigned char	ba, bb, dx;
	int				diff;
	char			sa[10], sb[10], sx[10];

	while (i < n)
	{
		ba = a[i];
		bb = b[i];
		dx = (unsigned char)(ba ^ bb);
		diff = (int)ba - (int)bb;
		str_to_bits8(ba, sa, 1);
		str_to_bits8(bb, sb, 1);
		printf("[%zu]\t  a = %s (0x%02X,%3u)\n\t  b = %s (0x%02X,%3u)  diff = %d\n",
               i, sa, ba, ba, sb, bb, bb, diff);
		if (ba != bb)
			return (diff);
		i++;
	}
	return (0);
}

int main(void)
{
    unsigned char x[] = {'A', 'B', 'C', 'D'};
    unsigned char y[] = {'A', 'B', 'D', 'D'};
    int r = ft_print_bits(x, y, sizeof(x));
    printf("return: %d\n", r);
    return 0;
}