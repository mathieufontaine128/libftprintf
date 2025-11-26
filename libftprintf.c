/* ************************************************************************** */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:45:28 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/24 14:53:57 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

FormatHandler handlers[]=
{
	{'c', ft_putchar_fd_handler},
	{'s', ft_putstr_fd_handler},
	{'d', ft_putnbr_fd_handler},
	{'i', ft_putnbr_fd_handler},		
	{'u', ft_putnbr_un_fd_handler},
	//{'p', ft_print_vpointer},
	{0, NULL}
};
int	ft_printf(const char *form, ...)
{
	va_list args;
	va_start(args, form);
	int	len;
	int	i;

	len = 0;
	while (*form)
	{
		if (*form == '%')
		{
			form++;
			i = 0;
			while (handlers[i].format_char)
			{
				if (handlers[i].format_char == *form)
					len += handlers[i].convert_func(args);
				i++;
			}
		}
		else 
			len += ft_putchar_fd(*form, 1);
		form++;
	}
	va_end(args);
	return (len);
}
