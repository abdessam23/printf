/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:42:04 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/17 10:20:05 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_intmin(unsigned int n)
{
	if (n > 9)
		ft_intmin(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_intmin(-n);
	}
	else
		ft_intmin(n);
}

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
			ft_putchar(va_arg(args, int));
			count++;
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'd')
		{
			ft_putnbr(va_arg(args, int));
			count++;
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			ft_putstr(va_arg(args, char *));
			count++;
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'i')
			ft_putchar(va_arg(args, int));

		else
		{
			ft_putchar(format[i]);
		}
		i++;			
	}
	va_end (args);
	return (count);
}

int main()
{
	ft_printf("hello this my %s \n and his num  : %d \n and his symbol: %c \n","printf",3,'P');
}
