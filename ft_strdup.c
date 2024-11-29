#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	return ((char *)ft_memcpy(malloc(ft_strlen(s)), s, ft_strlen(s)));
}
