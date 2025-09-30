#include "libft.h"

static int get_num_digits(int n)
{
	int i;

	i = 0;
	while(n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		count;
	int		i;
	char	*ret;
	int		aux;

	num = (long)n;
	count = get_num_digits(num);
	if (num < 0)
		count++;
	ret = malloc(sizeof(char) * count + 1);
	if (!ret)
		return (NULL);
	i = count;
	while (i >= 0)
	{
		ret[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	ret[count] = '\0';
	return (ret);
}