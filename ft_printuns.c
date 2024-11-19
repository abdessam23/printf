/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:31:34 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/19 22:37:08 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuns(unsigned int n)
{
	int	l;

	l = ft_numlen(n);
	if (n > 9)
		ft_printuns(n / 10);
	ft_printchar(n % 10 + '0');
	return (l);
}
