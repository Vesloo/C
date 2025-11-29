#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = -1;

    while (str[++i])
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            continue;
        else
            return (0);
    }
    return (1);
}