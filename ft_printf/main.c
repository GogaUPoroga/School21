#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char c = 'x';
	char *str = "Privet buffet kak dela";
	char *str2 = NULL;
	int d = -2147483648;

	//int n;
	int ftn;

	/*printf("ORIGINAL printf:\n\n");
	n = printf("%c %s %s %i %d %p %u %x %X %%", c, str, str2, d, d, str, d, d, d);

	printf("\n\n");
	printf("FT_PRINTF:\n\n");*/

	ftn = ft_printf("%c %s %s %i %d %p %u %x %X %%", c, str, str2, d, d, str, d, d, d);

	//printf("\n\nRETURN VALUE:\noriginal: %i\nft: %i\n\n", n, ftn);
	return (0);
}