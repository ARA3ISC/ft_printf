#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_printf("%d\n", 12));
	printf("%d\n", printf("%d\n", 12));
	// printf("%p\n", p);
}
