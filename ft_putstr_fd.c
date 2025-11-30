/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:35:23 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 13:36:24 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
	{	
		write (1, "(null)", 6);
		return (0);
	}
	len = ft_strlen(s);
	write(fd, s, len);
	return (len);
}
/*int	main(void)
{
	char	str[] = "Hello World";
	char	*str2 = "bonjour monde";
		
	ft_printf("%s\n", str);
	ft_printf("%s\n", str2);
}*/
