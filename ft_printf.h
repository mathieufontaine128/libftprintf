/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:56:26 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/28 10:36:40 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H 
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *form, ...);
int	ft_printer(va_list args, char format_char);
int	ft_putchar_fd_handler(va_list args);
int	ft_putstr_fd_handler(va_list args);
int	ft_putnbr_fd_handler(va_list args);
int	ft_putnbr_un_fd_handler(va_list args);
int	ft_puthex_low_fd_handler(va_list args);
int	ft_puthex_upp_fd_handler(va_list args);
int	ft_putptr_fd_handler(va_list args);
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putnbr_un_fd(unsigned int n, int fd);
int	ft_putnbr_base_fd(unsigned long nbr, const char *base, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putptr_fd(void *ptr, int fd);
size_t	ft_strlen(const char *s);
#endif
