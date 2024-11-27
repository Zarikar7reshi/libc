#include "libft.h"

int ft_memcmp(const void *a1, const void *a2, size_t size);

int ft_memcmp(const void *a1, const void *a2, size_t size)
{
    unsigned char c1;
    unsigned char c2;
    size_t i;
    
    i = 0;
    while (i < size)
    {
        c1 = *(unsigned char *)a1;
        c2 = *(unsigned char *)a2;
        a1++;
        a2++;
        i++;
        if (c1 != c2)
            return ((int)c1 - c2);
    }
    return (0);
}