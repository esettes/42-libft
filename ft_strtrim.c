#include "libft.h"

/**
 * Erases  chars of string 'set' from start and from end of string 's1'
 * since set is in s1, remaining string is returned
 * If s1 or set is NULL, return NULL
 * If s1 only contains chars from set, return empty string
 * Example: s1 = "  \n\t Hello World \t\n  "
 *			set = " \n\t"
 *			return "Hello World"
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	int 	end;
	char	*ret;
	int i = 0;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1);
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	len = 0;
	while ((start + len) <= end)
		len++;
	ret = malloc(sizeof(char) * len + 1);
	while (start < end)
		ret[i++] = *(s1 + start++);
	ret[i] = '\0';
	return (ret);
}

int main(int argc, char *argv[])
{
	char *s1;
	char *set;
	char *res;

	if (argc == 3)
	{
		s1 = argv[1];
		set = argv[2];
		res = ft_strtrim(s1, set);
		printf("String after trim: '%s'\n", res);
	}
	return (0);
}