#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && n - 1 > 0 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
