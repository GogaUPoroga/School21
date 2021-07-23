#include "ft_printf.h"

char	*change_base(unsigned long long i, int base)
{
	char					*str;
	int						c;
	unsigned long long		tmp;

	c = 0;
	tmp = i;
	if (i == 0)
		return (str = ft_strdup("0"));
	while (tmp > 0)
	{
		tmp /= base;
		c++;
	}
	str = malloc(sizeof(char) * (c + 1));
	str[c--] = '\0';
	while (i)
	{
		if ((i % base) < 10)
			str[c] = (i % base) + 48;
		else
			str[c] = (i % base) + 87;
		i /= base;
		c--;
	}
	return (str);
}

int	hex_write(int size, unsigned int i)
{
	int		len;
	int		c;
	char	*str;

	len = 0;
	c = -1;
	str = change_base(i, 16);
	if (size)
		while (str[++c])
			str[c] = ft_toupper(str[c]);
	len += ft_putstr(ft_strlen(str), str);
	free(str);
	return (len);
}
