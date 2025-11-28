#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp_tab[size];

    i = 0;

    while (i < size - 1)
        i++;
    while (i >= 0)
        temp_tab[i] = tab[i--];
    while (i < size - 1)
        tab[i] = temp_tab[i++];
}

int main(void)
{
    int tab[3] = { 1, 2, 3 };
    ft_rev_int_tab(tab, 3);
}