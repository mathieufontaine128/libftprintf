/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:55:22 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/24 14:30:40 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		len += ft_putnbr_fd(n / 10, fd);
	}
	len += ft_putchar_fd(n % 10 + '0', fd);
	return (len);
}
