/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:57:08 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/28 10:30:07 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long	addr;

	if (!ptr)
	{
		write(fd, "(nil)", 5);
		return (5);
	}
	write(fd, "0x", 2);
	addr = (unsigned long)ptr;
	return (2 + ft_putnbr_base_fd(addr, "0123456789abcdef", fd));
}
/*#include <stdio.h>
int	main(void)
{
	int	n;
	int	*ptr_n;
	char	*str;
	int	len;

	n = 42;
	str = "Hello World";
	ptr_n = &n;

	len = ft_putptr_fd(&n, 1);
	ft_putchar_fd('\n', 1);
	printf("%d", len);

	len = ft_putptr_fd(str, 1);
	ft_putchar_fd('\n', 1);
	printf("%d", len);
	
	len = ft_putptr_fd(ptr_n, 1);
	ft_putchar_fd('\n', 1);
	printf("%d", len);
	
	len = ft_putptr_fd(NULL, 1);
	ft_putchar_fd('\n', 1);
	printf("%d\n", len);

	return (0);
}*/
