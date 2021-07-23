#include "ft_printf.h"

int	perc_write(void)
{
	int	len;

	len = 1;
	write(1, "%", 1);
	return (len);
}
