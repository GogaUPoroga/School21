#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) s;
	while (n != 0)
	{
		if (*tmp == (unsigned char) c)
			return (tmp);
		tmp++;
		n--;
	}
	return (NULL);
}
