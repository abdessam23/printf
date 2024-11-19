/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:19:19 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/19 17:47:37 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_unsint_t(unsigned int n)
{
	if (n > 9)
		ft_unsint_t(n / 10);
	ft_printchar(n % 10 + '0');
}

int	ft_printnbr_int(int n)
{
	int	l;

	l = ft_numlen(n);
	if (n < 0)
	{
		write(1, "-", 1);
		ft_unsint_t(-n);
	}
	else
		ft_unsint_t(n);
	return (l);
}
