#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_string(char a, char b, char c)
{
    if (a == '7' && b == '8' && c == '9')
    {
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(c);
    }
    else
    {
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(c);
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb(void)
{
    int a = '0';
    int b = '1';
    int c = '2';

    while (a <= '7')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                ft_print_string(a, b, c);
                c++;
            }
            c = ++b + 1;
        }
        b = ++a;
    }
}

int main(void)
{
    ft_print_comb();
}