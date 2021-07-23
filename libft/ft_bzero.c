#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t			nb;

	tmp = s;
	nb = 0;
	while (nb < n)
	{
		tmp[nb] = 0;
		nb++;
	}
}
