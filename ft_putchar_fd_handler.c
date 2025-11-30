/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_handler.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:07:07 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 09:52:51 by mfontain         ###   ########.fr       */
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
/*int	test_handler(int value, ...)
{
	va_list args;
	int	len;

	va_start(args, value);
	len = ft_putchar_fd_handler(args);
	va_end(args);
	write(1, " ", 1);
	return (len);
}
int	main(void)
{	
	int	i;
	int	len;

	i = 0;
	while (i <= 127)
	{
		len = test_handler(i, i);
		ft_printf("Pour i =  %d   len = %d                ",i, len);
		if (i % 10 == 0)
			ft_printf("\n");
		i++;
	}
}*/
