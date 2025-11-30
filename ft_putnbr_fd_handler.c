/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:52:18 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 10:28:35 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_fd_handler(va_list args)
{
	int	nbr;
	int	len;

	nbr = va_arg(args, int);
	len = ft_putnbr_fd(nbr, 1);
	return (len);
}
/*int	test_handler(int value, ...)
{
	va_list args;
	int	 len;

	va_start(args, value);
	len = ft_putnbr_fd_handler(args);
	va_end(args);
	write(1, " ", 1);
	return (len);
}
#include <stdio.h>
int	main(void)
{
	int	len;

	len = test_handler(255, 255);
	ft_putnbr_fd(len, 1);
	ft_putchar_fd('\n', 1);

	len = printf("%d", 255);
	printf(" %d\n", len);

	len = test_handler(4095, 4095);
	ft_putnbr_fd(len, 1);
	ft_putchar_fd('\n', 1);

	len = printf("%d", 4095);
	printf(" %d\n", len);

	len = test_handler(65535, 65535);
	ft_putnbr_fd(len, 1);
	ft_putchar_fd('\n', 1);

	len = printf("%d", 65535);
	printf(" %d\n", len);
	return (0);
}*/
