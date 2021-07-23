#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n != 0)
	{
		*tmp_dst = *tmp_src;
		tmp_src++;
		tmp_dst++;
		n--;
	}
	return (dst);
}
