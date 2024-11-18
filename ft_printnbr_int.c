/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:19:19 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 10:26:04 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsint_t(unsigned int n)
{
	if (n > 9)
		ft_unsint(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_printnbr_int(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_unsint(-n);
	}
	else
		ft_unsint(n);
	return (ft_numlen(n));
}

