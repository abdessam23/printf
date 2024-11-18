/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexade_upr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:43:42 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 14:12:37 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexade_upr(unsigned int n)
{
	char *b = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_hexade_upr(n / 16);
		ft_hexade_upr(n % 16);
	}
	else
		write(1, &b[n], 1);
	return (ft_numlen(n));
}
