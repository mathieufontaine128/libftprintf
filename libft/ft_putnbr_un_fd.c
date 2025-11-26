/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:55:22 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/26 17:59:35 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_un_fd(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putnbr_un_fd(n / 10, fd);
	}
	len += ft_putchar_fd(n % 10 + '0', fd);
	return (len);
}
