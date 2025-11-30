/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:13:15 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 11:04:19 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr_fd_handler(va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	len = ft_putstr_fd(str, 1);
	return (len);
}
/*int	test_handler(char *value, ...)
{
	va_list	args;
	int	len;

	va_start(args, value);
	len = ft_putstr_fd_handler(args);
	va_end(args);
	write(1, " ", 1);
	return (len);
}
#include <stdio.h>
int	main(void)
{
	int	len;
	char	*str = "Hello World";

	len = test_handler(str, str);
	ft_printf("%d\n", len);

	len = printf("%s",str);
	printf(" %d\n", len);
}*/
