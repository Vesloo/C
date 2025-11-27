/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longlongwp <long.long.wp@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:43:46 by longlongwp        #+#    #+#             */
/*   Updated: 2025/11/27 21:43:46 by longlongwp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    char nbStr[10] = {0};
    int i = 0;
    int neg = 0;

    if (nb == 0)
        ft_putchar('0');

    if (nb < 0)
    {
        if (nb == -2147483648)
        {
            write(1, "-2147483648", 11);
            return;
        }
        neg = 1;
        nb = -nb;
    }
    while (nb > 0)
    {
        nbStr[i++] = nb % 10 + '0';
        nb /= 10;
    }
    if (neg)
        ft_putchar('-');
    while (i-- > 0)
        ft_putchar(nbStr[i]);
}

int main(void)
{
    ft_putnbr(-456);
    ft_putnbr(-0);
}