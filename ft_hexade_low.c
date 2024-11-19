/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexade_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:37:23 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/19 22:39:03 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexade_low(unsigned int n)
{
	int		l;
	char	*b;

	l = 0;
	b = "0123456789abcdef";
	if (n >= 16)
	{
		l += ft_hexade_low(n / 16);
		l += ft_hexade_low(n % 16);
	}
	else
		l += write(1, &b[n], 1);
	return (l);
}
