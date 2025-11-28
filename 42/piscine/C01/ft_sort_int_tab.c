#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    int i;
    int neg;

    i = 0;
    neg = 0;

    if (nb == -2147483648)
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

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{

    int i;
    int is_sorted;

    i = 0;
    is_sorted = 1;

    if (size < 2)
        return;

    while (i < size - 1)
    {
        if (i == size - 1)
            break;
        if (tab[i] > tab[i + 1])
        {
            ft_swap(&tab[i], &tab[i + 1]);
            is_sorted = 0;
        }
        i++;
    }
    if (!is_sorted)
        ft_sort_int_tab(tab, size);
}

int main(void)
{
    int i;
    int tab[6] = {4, 7, 8, 5, 12, 1};

    i = 0;
    ft_sort_int_tab(tab, 6);
    while (i < 6) /* 4 éléments à afficher */
    {
        ft_putnbr(tab[i]);
        ft_putchar(' '); /* séparateur visuel */
        ++i;
    }
}