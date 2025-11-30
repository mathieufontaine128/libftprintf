/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un_fd_handler.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:52:18 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 10:43:16 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_un_fd_handler(va_list args)
{
	unsigned int	nbr;
	int				len;

	nbr = va_arg(args, unsigned int);
	len = ft_putnbr_un_fd(nbr, 1);
	return (len);
}
/*int	test_handler(int value, ...)
{
	va_list	args;
	int	len;

	va_start(args, value);
	len = ft_putnbr_un_fd_handler(args);
	va_end(args);
	write(1, " ", 1);
	return (len);
}

#include <limits.h>
#include <stdio.h>
int	main(void)
{
	int	len;
	int	maxi = UINT_MAX;

	len = test_handler(42, 42);
	ft_printf("%d\n", len);
	
	len = printf("%u", 42);
	printf(" %d\n", len);
	
	len = test_handler(maxi, maxi);
	ft_printf("%d\n", len);
	
	len = printf("%u", maxi);
	printf(" %d\n", len);
}*/
