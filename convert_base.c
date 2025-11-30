#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
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
        ft_putchar(' ');
    }
}

int main(void)
{
    char *c;

    c = "Hello";
    convert_base(c, 16);
}