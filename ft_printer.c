/* ************************************************************************** */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:45:28 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/28 11:20:10 by mfontain         ###   ########.fr       */
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
