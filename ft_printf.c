/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:55:14 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/28 10:48:37 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				len += ft_putchar_fd('%', 1);
			else
				len += ft_printer(args, *format);
		}
		else
			len += ft_putchar_fd(*format, 1);
		format++;
	}	
	va_end(args);
	return (len);
}
#include <stdio.h>

int	main(void)
{	
	char	str[11] = "Hello World";
	//int	*ptr;
	int	nbrd = 42;
	int	nbri = -1764;
	int	nbru = 74088;
	int	hex = 1764;
	int	len =0;

	//*ptr = &nbrd;	
	len = ft_printf("%c %s %d %i %u %p %x %X %%\n", '7', str, nbrd, nbri, nbru, str, hex, hex);
	ft_printf("longueur du printf: %d\n\n", len);

	
	len = printf("%c %s %d %i %u %p %x %X %%\n", '7', str, nbrd, nbri, nbru, str, hex, hex);
	printf("longueur du printf: %d\n\n", len);
	
}
