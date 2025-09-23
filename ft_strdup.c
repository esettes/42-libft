#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*ret;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	i = -1;
	ret = malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	while (src[++i])
		ret[i] = src[i];
	ret[i] = '\0';
	return (ret);
}
