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

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i++]);
    }
}

void print(unsigned int c, unsigned int base)
{
    char *hex = "0123456789abcdef";

    if (c >= base)
    {
        print(c / base, base);
    }
    ft_putchar(hex[c % base]);
}

void convert_base(char *str, unsigned int base)
{
    int i;

    i = -1;

    while (str[++i])
        print(str[i], base);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    int i;
    int j;
    int k;
    char *str;
    char *chunk;

    str = (char *)addr;
    i = 0;
    j = -1;
    k = -1;

    while (++j <= 16 && str[++k] != '\0')
    {
        if (j % 4 == 0)
            ft_putchar(' ');
        chunk[j] = str[k];
        if (j == 16)
        {
            convert_base(chunk, 16);
            j = 0;
        }
    }
}

int main(void)
{
    char *str = "Hellooooooooooooooooooooooooooooooooooooooo";
    ft_print_memory((char *)str, 10); // size = nb de ligne
}