/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadds.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:55:01 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/19 17:36:18 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printadds(unsigned long n)
{
	int		l;
	char	*b;

	l = 0;
	b = "0123456789abcdef";
	if (n >= 16)
	{
		l += ft_printadds(n / 16);
		l += ft_printadds(n % 16);
	}
	else
		l += write(1, &b[n], 1);
	return (l);
}
