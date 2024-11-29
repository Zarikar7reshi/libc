#include "libft.h"

char	*ft_strchr(const char *string, int c);

char	*ft_strchr(const char *string, int c)
{
	return (ft_memchr(string, c, ft_strlen(string) + 1));
}
