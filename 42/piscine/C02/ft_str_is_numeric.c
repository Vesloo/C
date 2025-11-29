#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = -1;

    while (str[++i])
    {
        if ((str[i] >= '0' && str[i] <= '9'))
            continue;
        else
            return (0);
    }
    return (1);
}