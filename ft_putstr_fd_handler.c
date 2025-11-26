/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_handler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:13:15 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/24 14:49:13 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	 ft_putstr_fd_handler(va_list args)
{
	char	*str;
	int len;

	str = va_arg(args, char *);
	len = ft_putstr_fd(str, 1);
	return (len);}
