#include "libft.h"

void    *ft_memmove(void *to, const void *from, size_t size);

void    *ft_memmove(void *to, const void *from, size_t size)
{
    void    *saveto;
    unsigned char   *c_to;
    unsigned char   *c_from;

    saveto = to;
    c_to = to;
    c_from = (unsigned char *)from;
    if (c_to < c_from)
        while (size--)
            *c_to++ = *c_from++;
    else if (c_to > c_from)
    {
        c_to += size - 1;
        c_from += size - 1;
        while (size--)
            *c_to-- = *c_from--;
    }
    return (to);
}