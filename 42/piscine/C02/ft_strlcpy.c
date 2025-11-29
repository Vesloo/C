/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longlongwp <long.long.wp@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:53:53 by longlongwp        #+#    #+#             */
/*   Updated: 2025/11/29 17:53:53 by longlongwp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putstr(char *str){
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i++]);
    }
}

void    ft_putnbr(int nb)
{
    int i;
    int neg;

    i = 0;
    neg = 0;

    if(nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = -1;

    if (size <= 0)
        dest[0] = '\0';
    else
    {
        while (++i < size - 1 && src[i])
            dest[i] = src[i];
    
        dest[i] = '\0';
    }
    i = 0;

    while (src[i])
        i++;

    return (i);
}

int main(void){
    int x = 5;
    char dest[0];
    char src[] = "Hello, world!";
    x = ft_strlcpy(dest, src, 0);
    ft_putstr(dest);
    ft_putnbr(x);
}