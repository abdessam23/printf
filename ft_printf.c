/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:42:04 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/17 18:05:35 by abhimi           ###   ########.fr       */
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
void	ft_putadress(unsigned long n)
{
	char *b = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putadress(n / 16);
		ft_putadress(n % 16);
	}
	else
		ft_putchar(b[n%16]);
}
void	ft_hexade_upr(unsigned int n)
{
	char *b = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_hexade_upr(n / 16);
		ft_hexade_upr(n % 16);
	}
	else
		ft_putchar(b[n%16]);
}

void	ft_hexade_low(unsigned int n)
{
	char *b = "0123456789abcdef";
	if (n >= 16)
	{
		ft_hexade_low(n / 16);
		ft_hexade_low(n % 16);
	}
	else
		ft_putchar(b[n%16]);
}
void	ft_unsint(unsigned int n)
{
	if (n > 9)
		ft_unsint(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_unsint(-n);
	}
	else
		ft_unsint(n);
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
		if (format[i] == '%' && format[i + 1] == 'u')
		{
			ft_unsint(va_arg(args, int));
			count++;
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'x')
		{
			ft_hexade_low(va_arg(args, int));
			count++;
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'X')
		{
			ft_hexade_upr(va_arg(args, int));
			count++;
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'p')
		{
			ft_putadress(va_arg(args, int));
			count++;
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			ft_putchar('%');;
			count++;
			i += 2;
		}
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
	ft_printf("%X",45);
}
