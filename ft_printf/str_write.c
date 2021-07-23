#include "ft_printf.h"

int	str_write(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
		str = "(null)";
	len += ft_putstr(ft_strlen(str), str);
	return (len);
}

int	ft_putstr(int longs, char *str)
{
	int	len;

	len = 0;
	while (str[len] && len < longs)
		len++;
	write(1, str, len);
	return (len);
}
