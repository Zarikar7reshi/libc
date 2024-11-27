#include "libft.h"

int ft_isprint(int c);

int ft_isprint(int c)
{    
    return (ft_isalnum(c) || c == 0x20 || ft_ispunct(c));
}