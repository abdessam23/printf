/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:19:19 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/18 18:52:23 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printnbr_int(int nb)
{
 int r;

 r = 0;
 if (nb == -2147483648)
    return (write(1, "-2147483648", 11));
 if (nb < 0)
 {
  r += write(1, "-", 1);
  nb *= -1;
 }
 if (nb > 9)
 {
    r += ft_printnbr_int(nb / 10);
    r += ft_printnbr_int(nb % 10);
 }
 else
    r += ft_printchar(nb + 48);
 return (r);
}