/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low_fd_handler.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:24:03 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 09:58:16 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex_low_fd_handler(va_list args)
{
	unsigned int	nbr;
	int				len;

	nbr = va_arg(args, unsigned int);
	len = ft_putnbr_base_fd(nbr, "0123456789abcdef", 1);
	return (len);
}
/*int	test_handler(unsigned int value, ...)
{
	va_list args;
	int	len;

	va_start(args, value);
	//va_arg(args, unsigned int);
	len = ft_puthex_low_fd_handler(args);
	va_end(args);
	write(1, " ", 1);
	return (len);
}
int	main(void)
{
	int	len;
	
	len = test_handler(255, 255);
	ft_putnbr_fd(len, 1);
	ft_putchar_fd('\n', 1);

	len = ft_printf("%x", 255);
	ft_printf(" %d\n", len);
	

	len = test_handler(4095, 4095);
	ft_putnbr_fd(len, 1);
	ft_putchar_fd('\n', 1);

	len = ft_printf("%x", 4095);
	ft_printf(" %d\n", len);
	
	len = test_handler(65535, 65535);
	ft_putnbr_fd(len, 1);
	ft_putchar_fd('\n', 1);
	
	len = ft_printf("%x", 65535);
	ft_printf(" %d\n", len);
	return (0);
}*/
