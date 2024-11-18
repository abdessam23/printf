/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadds.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:55:01 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 12:12:39 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadds(unsigned long n)
{
	char *b = "0123456789abcdef";
	if (n > 16)
	{
		ft_putadress(n / 16);
		ft_putadress(n % 16);
	}
	else
		ft_putchar(b[n]);
	return (ft_numlen(n));
}
