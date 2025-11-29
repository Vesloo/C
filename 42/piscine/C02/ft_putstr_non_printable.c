/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longlongwp <long.long.wp@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:47:55 by longlongwp        #+#    #+#             */
/*   Updated: 2025/11/29 18:47:55 by longlongwp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char *ft_convert_hexadecimal(char c)
{
    char *hex_str;
    int dec;
    int i;
    char result[3];
    
    hex_str = "0123456789abcdef";

    i = 0;
    dec = c;
    
    dec /= 16;
    result[i] = hex_str[dec];
    ft_putchar(result[i]);
    i++;
    dec = c;
    dec %= 16;
    result[i] = hex_str[dec];
    ft_putchar(result[i]);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = -1;

    while (str[++i] != '\0')
    {
        if (str[i] < 32)
        {
            ft_putchar('\\');
            ft_convert_hexadecimal(str[i]);
        }
        else 
            ft_putchar(str[i]);
    }
}

int main(void)
{
    char *c;

    c = "Hello \n, le peuple!";
    ft_putstr_non_printable(c);
}