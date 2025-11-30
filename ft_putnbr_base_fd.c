/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:10:43 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 08:28:04 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_base_fd(unsigned long nbr, const char *base, int fd)
{
	int	base_len;
	int	len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	len = 0;
	if (nbr >= (unsigned long)base_len)
		len += ft_putnbr_base_fd(nbr / base_len, base, fd);
	write(fd, &base[nbr % base_len], 1);
	return (len + 1);
}
/*#include <limits.h>
#include <stdio.h>

int main(void)
{	
	int	maxi = INT_MAX;
	int	mini = INT_MIN;
	int	i = -255;
	int	len;

	ft_putnbr_base_fd(maxi, "0123456789abcdef", 1);
	write(1, "\n", 1);
	ft_putnbr_base_fd(mini, "0123456789abcdef", 1);
	write(1, "\n", 1);
	ft_putnbr_base_fd(0, "0123456789abcdef", 1);
	write(1, "\n", 1);

	while (i <= 255)
	{	
		len = 0;
		ft_printf("%d en hexa donne : ", i);
		printf("%d en hexa donne : ", i);
		len = ft_putnbr_base_fd(i, "0123456789abcdef", 1);
		write (1, "     ", 5);
		ft_printf("nous avons %d caracteres\n", len);
		printf("nous avons %d caracteres\n", len);
		i += 5;
	}
		
}*/
