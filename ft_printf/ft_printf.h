#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		format_parse(char *data, va_list ap);

int		parse_type(va_list ap, char i);
int		check_type(int i);

int		char_write(char i);
int		hex_write(int size, unsigned int i);
int		str_write(char *str);
int		perc_write(void);
int		int_write(int i);
int		uns_int_write(unsigned int i);
int		point_write(unsigned long long i);

char	*change_base(unsigned long long i, int base);
int		ft_putstr(int longs, char *str);

#endif