#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	if (!s || len == 0)
		return (NULL);
	ret = malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len - 1)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
