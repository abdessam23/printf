/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:17:17 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 12:37:12 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_hexade_low(unsigned int n);
int	ft_hexade_upr(unsigned int n);
int	ft_numlen(long n);
int	ft_printadds(unsigned long n);
int ft_printchar(char c);
int	ft_printf(const char *format, ...);
int	ft_printnbr_int(int n);
int	ft_printstr(char *s);
int	ft_printuns(unsigned int n);

#endif