#include "libft.h"

int ft_isascii(int c);

int ft_isascii(int c)
{
    if (c >= 0x00 && c <= 0x7F)
        return (1);
    return (0);
}