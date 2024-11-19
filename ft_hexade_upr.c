/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexade_upr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:43:42 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/19 17:35:53 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexade_upr(unsigned int n)
{
	int		l;
	char	*b;

	l = 0;
	b = "0123456789abcdef";
	if (n >= 16)
	{
		l += ft_hexade_upr(n / 16);
		l += ft_hexade_upr(n % 16);
	}
	else
		l += write(1, &b[n], 1);
	return (l);
}
