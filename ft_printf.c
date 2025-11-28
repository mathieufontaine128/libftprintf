/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:55:14 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/28 09:06:30 by mfontain         ###   ########.fr       */
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
	char	*str = "Hello World";
	int	nbrd = 1764;
	int	nbri = -1764
	int	nbru = 74088;
	int	hex = 1764;
	int	*ptr;
	int	len =0;

	ptr = &str;	
	len = ft_printf("%c %s %d %i %u %p %x %X %%\n", '7', str, nbrd, nbri, nbru, ptr, hex, hex);
	ft_printf("longueur du printf: %d", len);

	
	len = printf("%c %s %d %i %u %p %x %X %%\n", '7', str, nbrd, nbri, nbru, ptr, hex, hex);
	printf("longueur du printf: %d", len);
	
}
