#include "ft_printf.h"

int	uns_int_write(unsigned int i)
{
	int		len;
	char	*str;

	len = 0;
	str = change_base(i, 10);
	len += ft_putstr(ft_strlen(str), str);
	free(str);
	return (len);
}
