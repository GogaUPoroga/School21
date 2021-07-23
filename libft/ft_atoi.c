#include "libft.h"

int	ft_atoi(const char *str)
{
	int	base;
	int	sign;
	int	i;

	sign = 1;
	base = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= (-1);
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		base = (base * 10) + (str[i] - '0');
		i++;
	}
	return (base * sign);
}
