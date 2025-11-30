/* ************************************************************************** */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:45:28 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 11:38:29 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printer(va_list args, char format_char)
{
	if (format_char == 'c')
		return (ft_putchar_fd_handler(args));
	else if (format_char == 's')
		return (ft_putstr_fd_handler(args));
	else if (format_char == 'd' || format_char == 'i')
		return (ft_putnbr_fd_handler(args));
	else if (format_char == 'u')
		return (ft_putnbr_un_fd_handler(args));
	else if (format_char == 'p')
		return (ft_putptr_fd_handler(args));
	else if (format_char == 'x')
		return (ft_puthex_low_fd_handler(args));
	else if (format_char == 'X')
		return (ft_puthex_upp_fd_handler(args));
	return (0);
}
/*int	test_printer(int format_char, ...)
{
	va_list	args;
	int	result;
	va_start(args, format_char);
	result = ft_printer(args, format_char);
	va_end(args);
	ft_printf("    test '%c' %d\n", format_char, result);
	return (result);
}
int	main(void)
{
	int	val = 42;

	test_printer('c', 'A');
	
	test_printer('s', "Hello World");

	test_printer('d', -42);

	test_printer('i', -42);
	
	test_printer('u', 42);
	
	test_printer('p', &val);
	
	test_printer('x', 255);
	
	test_printer('X', 255);

	return (0);

}*/
