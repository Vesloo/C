/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longlongwp <long.long.wp@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:30:31 by longlongwp        #+#    #+#             */
/*   Updated: 2025/11/29 19:30:31 by longlongwp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
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

void *ft_print_memory(void *addr, unsigned int size)
{
    if (size != 0)
    {
        ft_putstr(addr);
    }
}

int main (void) {
    char *str = "Hello";
    ft_print_memory(&str, 10);
}