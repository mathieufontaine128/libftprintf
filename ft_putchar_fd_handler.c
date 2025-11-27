/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_handler.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:07:07 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/27 22:22:04 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar_fd_handler(va_list args)
{
	char	c;
	int		len;

	c = (char)va_arg(args, int);
	len = ft_putchar_fd(c, 1);
	return (len);
}
