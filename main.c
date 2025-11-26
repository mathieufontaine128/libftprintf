#include "libftprintf.h"

int	main(void)
{
	int	i = 42;
	int	d = 19;
	unsigned int	u = 156;
	int	len;
	len = ft_printf("%s %c %s %d %i %u", "hello world", 'c', "roule", d, i, u);
	ft_printf("%d", len);

    return 0;
}
