/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:42:04 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/16 09:46:30 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	if (format[i] == "%" && format == "c")
		printchr(format[i]);
	if (format[i] == "%" && format == "d")
		printchr(format[i]);
	if (format[i] == "%" && (format == "x" || format == "X")
		printchr(format[i], args);
	if (format[i] == "%" && format == "i")
		printchr(format[i]);
	if (format[i] == "%" && format == "p")
		printchr(format[i]);
	if (format[i] == "%" && format == "u")
		printchr(format[i]);
	if (format[i] == "%" && format == "s")
		printstr(format[i]);
	if (format[i] == "%" && format == "f")
		printchr(format[i]);
	
	
	va_start (args, format);
	va_end (args);
}
