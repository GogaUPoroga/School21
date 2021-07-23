#include "ft_printf.h"

int	format_parse(char *data, va_list ap)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (data[i])
	{
		if (data[i] == '%' && check_type(data[i + 1]))
		{
			i++;
			if (check_type(data[i]))
				len += parse_type(ap, data[i]);
		}
		else
			len += ft_putstr(1, &data[i]);
		i++;
	}
	return (len);
}

int	check_type(int i)
{
	if (i == 'c' || i == 's' || i == 'p' || i == 'd' || i == 'i' \
	|| i == 'u' || i == 'x' || i == 'X' || i == '%')
		return (1);
	else
		return (0);
}

int	parse_type(va_list ap, char i)
{
	int	len;

	len = 0;
	if (i == 'c')
		len += char_write(va_arg(ap, int));
	else if (i == 's')
		len += str_write(va_arg(ap, char *));
	else if (i == 'p')
		len += point_write(va_arg(ap, unsigned long long));
	else if (i == 'd' || i == 'i')
		len += int_write(va_arg(ap, int));
	else if (i == 'u')
		len += uns_int_write(va_arg(ap, unsigned int));
	else if (i == 'x')
		len += hex_write(0, va_arg(ap, unsigned int));
	else if (i == 'X')
		len += hex_write(1, va_arg(ap, unsigned int));
	else if (i == '%')
		len += perc_write();
	return (len);
}
