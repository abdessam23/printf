/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexade_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:37:23 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 14:12:46 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexade_low(unsigned int n)
{
	char *b = "0123456789abcdef";
	if (n >= 16)
	{
		ft_hexade_low(n / 16);
		ft_hexade_low(n % 16);
	}
	else
		write(1, &b[n], 1);
	return (ft_numlen(n));
}

