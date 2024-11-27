#include "libft.h"

void    *ft_memset(void *block, int c, size_t size);

void    *ft_memset(void *block, int c, size_t size)
{
    void    *saveblock = block;
    while (size--)
        *(unsigned char*)block++ = (unsigned char)c;
    return (saveblock);
}