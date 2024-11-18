/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:19:19 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 12:45:02 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_unsint_t(unsigned int n)
{
	if (n > 9)
		ft_unsint_t(n / 10);
	putchar(n % 10 + '0');
}

int	ft_printnbr_int(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		ft_unsint_t(-n);
	}
	else
		ft_unsint_t(n);
	return (ft_numlen(n));
}

