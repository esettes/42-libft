#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s || len == 0)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	ret = malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

// int main()
// {
// 	const char *str = "Hello World";
// 	unsigned int start = 15;
// 	size_t len = 5;

// 	char *substr = ft_substr(str, start, len);
// 	if (substr)
// 	{
// 		printf("%s\n", substr);
// 		free(substr);
// 	}
// 	return 0;
// }