#include "libft.h"

int	ft_isalnum(int c)
{
	if (!ft_isdigit(c) || !ft_isalpha(c))
		return (0);
	return (1);
}
