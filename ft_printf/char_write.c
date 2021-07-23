#include "ft_printf.h"

int	char_write(char i)
{
	int	len;

	len = 1;
	ft_putchar_fd(i, 1);
	return (len);
}
