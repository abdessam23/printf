/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:42:04 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/20 18:47:51 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == '%')
		count = ft_printchar('%');
	else if (c == 'c')
		count = ft_printchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		count = ft_printnbr_int(va_arg(args, int));
	else if (c == 's')
		count = ft_printstr(va_arg(args, char *));
	else if (c == 'u')
		count = ft_printuns(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_hexade_low(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_hexade_upr(va_arg(args, unsigned int));
	else if (c == 'p')
	{
		count = ft_printstr("0x");
		count += ft_printadds(va_arg(args, unsigned long));
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	char	b;

	if (!format)
		return (0);
	va_start(args, format);
	count = 0;
	if (write(1, &b, 0) == -1)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_format(args,*format);
		}
		else
			count += ft_printchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
