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

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i])
        i++;
    return (i);
}

int printable(char c)
{
    if (c >= 33 && c <= 126)
        return (1);
    return (0);
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
    {
        print(str[i], base);
    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    int i;
    int j;
    int k;
    char *str;
    char chunk[16];

    str = (char *)addr;
    i = 0;

    while (i < size)
    {
        j = 0;
        while (j < 16 && i + j < size)
            j++;
        k = -1;
        while (++k < j)
        {
            print(str[i + k], 16);
            if (k % 4 == 0)
                ft_putchar(' ');
        }
        while (k < 16)
        {
            ft_putstr("  ");
            if (k % 4 == 0)
                ft_putchar(' ');
            k++;
        }
        k = -1;
        while (++k < j)
            printable(str[k + i]) ? ft_putchar(str[k + i]) : ft_putchar('.');
        ft_putchar('\n');
        i += 16;
    }
}

int main(void)
{
    char *str = "Helloooooooooo\n\n\n\n\nooooooooooooooooooooooooooooolll112345676890123";
    ft_print_memory((char *)str, 40); // size = nb de ligne
}