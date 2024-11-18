/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexade_upr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:43:42 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 10:44:37 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexade_upr(unsigned int n)
{
	char *b = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_hexade_upr(n / 16);
		ft_hexade_upr(n % 16);
	}
	else
		ft_putchar(b[n]);
	return (ft_numlen(n));
}
