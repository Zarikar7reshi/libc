#include "libft.h"

#include "libft.h"

char    *ft_strrchr(const char *string, int c);

char    *ft_strrchr(const char *string, int c)
{
    char *t = string;
    int i;

    i = ft_strlen(string);
    while (i >= 0)
    {
        if (*t == c)
        {
            return (t);
        }
        t--;
        i--;
    }
    return (NULL);
}