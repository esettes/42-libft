#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		ret;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	ret = -1;
	if (c > 255)
		c = c % 256;
	while (str[i])
	{
		if (str[i] == c)
			ret = i;
		i++;
	}
	if (ret == -1)
		return (NULL);
	return (&str[ret]);
}