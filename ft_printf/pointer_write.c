#include "ft_printf.h"

int	point_write(unsigned long long i)
{
	int		len;
	char	*str;

	len = 2;
	str = change_base(i, 16);
	write(1, "0x", 2);
	len += ft_putstr(ft_strlen(str), str);
	free(str);
	return (len);
}
