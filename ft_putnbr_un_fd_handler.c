/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un_fd_handler.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:52:18 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/24 14:42:22 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libftprintf.h>

int	ft_putnbr_un_fd_handler(va_list args)
{
	unsigned int	nbr;
	int	len;

	nbr  = va_arg(args,unsigned int);
	len = ft_putnbr_un_fd(nbr, 1);
	return (len);
}

