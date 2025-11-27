/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:52:18 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/27 22:00:49 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_printf.h>

int	ft_putnbr_fd_handler(va_list args)
{
	int	nbr;
	int	len;

	nbr = va_arg(args, int);
	len = ft_putnbr_fd(nbr, 1);
	return (len);
}
