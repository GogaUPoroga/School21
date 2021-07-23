#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ap;
	char	*data;

	len = 0;
	if (format == NULL)
		return (0);
	data = ft_strdup(format);
	if (NULL == data)
		return (-1);
	va_start(ap, format);
	len += format_parse(data, ap);
	va_end(ap);
	free(data);
	return (len);
}
