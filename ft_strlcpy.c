#include "libft.h"

size_t  ft_strlcpy(char *to, char *from, size_t size);

size_t  ft_strlcpy(char *to, char *from, size_t size)
{
    if (size > ft_strlen(from))
    {
        ft_memcpy(to, from, ft_strlen(from));
        size = ft_strlen(from); 
    }
    else
    {
        ft_memcpy(to, from, size);
    }
    to[size] = '\0';
    return (ft_strlen(from));
}