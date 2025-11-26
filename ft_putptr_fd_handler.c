/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:08:48 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/26 23:05:47 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_putptr_fd_handler(va_list args)
{
	void	*ptr;
	int	len;

	ptr = va_arg(args, void*);
	len  = ft_putptr_fd(ptr, 1);
	return (len);
}
#include <stdio.h>
#include <stdarg.h>
int	main(void)
{
	va_list args;
	int	n;
	char	*str;
	int	len;

	n = 42;
	str = "Hello World";

	va_start(args, &n);
	len = ft_putptr_fd_handler(args);
	va_end(args);
	ft_putchar_fd('\n', 1);
	printf("longueur; %d\n", len);
	
	va_start(args, str);
	len = ft_putptr_fd_handler(args);
	va_end(args);
	ft_putchar_fd('\n', 1);
	printf("longueur; %d\n", len);

	va_start(args, NULL);
	len = ft_putptr_fd_handler(args);
	va_end(args);
	ft_putchar_fd('\n', 1);
	printf("longueur; %d\n", len);
}
