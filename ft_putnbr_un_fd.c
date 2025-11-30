/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:55:22 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 09:09:37 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

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
/*#include <limits.h>
int	main(void)
{
	int	mini = 0;
	int	maxi = UINT_MAX;
	int	nbr = 42;
	int	len = 0;
	len = ft_putnbr_un_fd(mini, 1);
	ft_printf("       len =  %d\n", len);
	len = ft_putnbr_un_fd(maxi, 1);
	ft_printf("       len = %d\n", len);
	len = ft_putnbr_un_fd(nbr, 1);
	ft_printf("       len = %d\n", len);
}*/
