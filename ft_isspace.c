#include "libft.h"

int ft_isspace(int c);

int ft_isspace(int c)
{
    if((c >= 0x09 && c <= 0x0D) || c == 0x20)
        return c;
    return 0;
}