/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexade_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:37:23 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 10:42:47 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexade_low(unsigned int n)
{
	char *b = "0123456789abcdef";
	if (n >= 16)
	{
		ft_hexade_low(n / 16);
		ft_hexade_low(n % 16);
	}
	else
		ft_putchar(b[n]);
	return (ft_numlen(n));
}

