/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:45:45 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/26 22:38:15 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFTPRINTF_H 
#define LIBFTPRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

typedef struct
{
	char format_char;
	int(*convert_func)(va_list args);
} FormatHandler;

int	ft_printf(const char *form, ...);
int    ft_putchar_fd_handler(va_list args);
int    ft_putstr_fd_handler(va_list args);
int	ft_putnbr_fd_handler(va_list args);
int	ft_putnbr_un_fd_handler(va_list args);
extern FormatHandler handlers[];

#endif

