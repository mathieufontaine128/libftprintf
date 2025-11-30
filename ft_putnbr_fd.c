/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:55:22 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 08:58:40 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

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
/*#include <limits.h>
int	main(void)
{
	int	mini = INT_MIN;
	int	maxi =	INT_MAX;
	int	nbr = 42;
	int	len = 0;
	
	len = ft_putnbr_fd(mini, 1);
	ft_printf("      %d\n", len);
	len = ft_putnbr_fd(maxi, 1);
	ft_printf("      %d\n", len);
	len = ft_putnbr_fd(nbr, 1);
	ft_printf("      %d\n", len);
	len = ft_putnbr_fd(0, 1);
	ft_printf("      %d\n", len);
}*/
