#include "ft_printf.h"

int	int_write(int i)
{
	int		len;
	char	*str;

	len = 0;
	if (i < 0)
	{
		write(1, "-", 1);
		len++;
		if (i == -2147483648)
			str = ft_strdup("2147483648");
		else
			i = -i;
	}
	if (i != -2147483648)
		str = ft_itoa(i);
	len += ft_putstr(ft_strlen(str), str);
	free(str);
	return (len);
}
