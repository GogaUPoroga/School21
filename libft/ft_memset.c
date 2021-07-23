#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	size_t			n;

	tmp = b;
	n = 0;
	while (n < len)
	{
		tmp[n] = (unsigned char)c;
		n++;
	}
	return (b);
}
