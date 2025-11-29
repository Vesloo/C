#include <unistd.h>

char *ft_strncpy(char *dst, char *src, unsigned int n)
{
    int i;

    i = 0;

    while (src[i] != '0' && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}