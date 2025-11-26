/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:10:43 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/26 19:51:00 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
/*int main(void)
{
	ft_putnbr_base_fd(257, "0123456789abcdef", 1);
}*/
