/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadds.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:55:01 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/21 19:06:28 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printhex(uintptr_t n)
{
	char	*b;
	int		k;

	k = 0;
	b = "0123456789abcdef";
	if (n >= 16)
		k += ft_printhex(n / 16);
	k += write(1, &b[n % 16], 1);
	return (k);
}

int	ft_printadds(void *p)
{
	int			l;
	uintptr_t	n;

	l = 0;
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	n = (uintptr_t)p;
	l += ft_printstr("0x");
	l += ft_printhex(n);
	return (l);
}
