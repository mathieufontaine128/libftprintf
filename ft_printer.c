/* ************************************************************************** */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:45:28 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/27 21:58:19 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

FormatHandler handlers[]=
{
	{'c', ft_putchar_fd_handler},
	{'s', ft_putstr_fd_handler},
	{'d', ft_putnbr_fd_handler},
	{'i', ft_putnbr_fd_handler},		
	{'u', ft_putnbr_un_fd_handler},
	{'p', ft_putptr_fd_handler},
	{'x', ft_puthex_low_fd_handler},
	{'X', ft_puthex_upp_fd_handler},
	{0, NULL}
};
int	ft_printer(va_list args, char format_char)
{
	int	i;

	i = 0;
	while (handlers[i].format_char)
	{
		if (handlers[i].format_char == format_char)
			return (handlers[i].convert_func(args));
		i++;
	}
	return (0);
}
