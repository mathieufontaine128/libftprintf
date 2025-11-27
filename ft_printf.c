/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:55:14 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/27 21:55:31 by mfontain         ###   ########.fr       */
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
