#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

// int main()
// {
// 	int test_char = 'a';
// 	if (ft_isalpha(test_char))
// 		printf("%c is an alphabetic character.\n", test_char);
// 	else
// 		printf("%c is not an alphabetic character.\n", test_char);
// 	return 0;
// }