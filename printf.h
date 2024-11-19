/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:07:47 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/19 17:52:59 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_hexade_low(unsigned int n);
int	ft_hexade_upr(unsigned int n);
int	ft_numlen(long n);
int	ft_printadds(unsigned long n);
int	ft_printchar(char c);
int	ft_printf(const char *format, ...);
int	ft_printnbr_int(int n);
int	ft_printstr(char *s);
int	ft_printuns(unsigned int n);
#endif
