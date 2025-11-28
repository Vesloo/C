#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b) {
    int stored_div;
    int stored_mod;

    stored_div = *a / *b;
    stored_mod = *a % *b;

    *a = stored_div;
    *b = stored_mod;
}