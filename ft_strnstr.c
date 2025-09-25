#include "libft.h"

/**
 * locates the first occurrence of the  null-terminated string little in the
 * string big, where not more than len characters are searched.
 * 
 * @return If little is an empty string, big is returned; if little	occurs
 * nowhere in big, NULL is returned; otherwise a pointer to the first character
 * of the first occurrence of little is returned
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && big[j + i] && (big[i + j] == little[j]) && len)
			{
				j++;
				len--;
			}
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
