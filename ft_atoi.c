#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			sign;

	i = 0;
	res = 0;
	sign = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
			i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (sign % 2 != 0)
		res *= -1;
	return ((int)res);
}
