/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:42:04 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 12:45:40 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	count;

	i = 0;
	count = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			count += ft_printchar(va_arg(args, int));
			i += 2;
		}
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			count += ft_printnbr_int(va_arg(args, int));
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			count += ft_printstr(va_arg(args, char *));
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'u')
		{
			count += ft_printuns(va_arg(args, unsigned int));
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'x')
		{
			count += ft_hexade_low(va_arg(args, unsigned int));
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'X')
		{
			count += ft_hexade_upr(va_arg(args, unsigned int));
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'p')
		{
			count += ft_printadds(va_arg(args, int));
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			count += ft_printchar('%');;
			i += 2;
		}
		else
		{
			count += ft_printchar(format[i]);
		}
		i++;			
	}
	va_end (args);
	return (count);
}

#include<stdio.h>
int main()
{
	int i = ft_printf("hello my name : %s \nmy age is: %d  ","abdo",28);
	ft_printf("\n%d\n", i);
	i = printf("\nhello my name : %s \nmy age is: %d","abdo",28);
	printf("\n%d", i);
}