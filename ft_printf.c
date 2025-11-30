/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:55:14 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/30 14:10:19 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				len += ft_putchar_fd('%', 1);
			else
				len += ft_printer(args, *format);
		}
		else
			len += ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (len);
}
#include <stdio.h>
#include <limits.h>
#include <string.h>
int	main(void)
{	
	//char	strin[11] = "Hello World";
	//char	long_str[10000];
	int	nbrpos = 42;
	int	nbrneg = -42;
	//int	nbru = 74088;
	//int	hex = 1764;
	//int	len =0;
	//int	i = 0;
	int	mini = INT_MIN;
	int	maxi = INT_MAX;
	//int	unsi_max = UINT_MAX;

	//memset(long_str, 'A', 9999);
	//long_str[9999] = '\0';

	/*-------------test--global-----------------*/
	/*/len = ft_printf("%c %s %d %i %u %p %x %X %%\n",
 	'7', str, nbrd, nbri, nbru, str, hex, hex);
	ft_printf("longueur du printf: %d\n\n", len);

	
	len = printf("%c %s %d %i %u %p %x %X %%\n", 
	'7', str, nbrd, nbri, nbru, str, hex, hex);
	printf("longueur du printf: %d\n\n", len);*/

	/*--------------test--%c---------------------*/
	/*ft_printf("---------test--%%c-----------\n");
	while(i <= 127)
	{
		ft_printf("pour i = %d ft_printf => %c\n", i, i);
		printf("pour i = %d    printf => %c\n", i, i);
		i++;
	}
	ft_printf("pour i = 300 ft_printf => %c\n", 300);
	printf("pour i = 300 ft_printf => %c\n", 300);
	ft_printf("pour i = maxi ft_printf => %c\n", maxi);
	printf("pour i = maxi ft_printf => %c\n", maxi);
	ft_printf("pour i = mini ft_printf => %c\n", mini);
	printf("pour i = mini ft_printf => %c\n", mini);
	ft_printf("-----------fin-test--%%c-------\n"); */

	/*------------------test--%s-----------------*/
	/*ft_printf("------------test--%%s-------------\n");
	ft_printf("%s\n", strin);
	printf("%s\n", strin);
	ft_printf("%s\n", "");
	printf("%s\n", "");
	ft_printf("%s", NULL);
	printf("%s", NULL);
	ft_printf("%s\n\n\n\n\n", long_str);
	printf("%s\n", long_str);
	ft_printf("%s\n", "abc\0def");
	printf("%s\n", "abc\0def");
	ft_printf("%s\n", "abc\007b");
	printf("%s\n", "abc\007b");*/


	/*--------------test--%d------------------*/
	ft_printf("%d\n",nbrpos);
	printf("%d\n",nbrpos);
	ft_printf("%d\n",0);
	printf("%d\n",0);
	ft_printf("%d\n",nbrneg);
	printf("%d\n",nbrneg);
	ft_printf("%d\n",maxi);
	printf("%d\n",maxi);
	ft_printf("%d\n",mini);
	printf("%d\n",mini);
	ft_printf("%d\n",(int)4294967295);
	printf("%d\n",(int)4294967295);

	/*-------------test--%i----------------*/
	
	ft_printf("%i\n",nbrpos);
	printf("%i\n",nbrpos);
	ft_printf("%i\n",0);
	printf("%i\n",0);
	ft_printf("%i\n",nbrneg);
	printf("%i\n",nbrneg);
	ft_printf("%i\n",maxi);
	printf("%i\n",maxi);
	ft_printf("%i\n",mini);
	printf("%i\n",mini);
	ft_printf("%i\n",(int)4294967295);
	printf("%i\n",(int)4294967295);

}
