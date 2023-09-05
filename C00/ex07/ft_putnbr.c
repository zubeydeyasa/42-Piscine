/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyasa <zyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:17:02 by zyasa             #+#    #+#             */
/*   Updated: 2022/11/15 12:52:07 by zyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long i;
    i = nb;

    if (i < 0)
    {
        write(1, '-', 1);
        i *= -1;
    }
    if (i >= 10)
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
    else
        ft_putchar(i + 48);
}