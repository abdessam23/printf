/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:48:58 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/19 22:44:42 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	l;

	l = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[l])
		l++;
	while (*s)
	{
		ft_printchar(*s);
		s++;
	}
	return (l);
}
