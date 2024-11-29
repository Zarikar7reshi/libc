#include "libft.h"

size_t	ft_strlcpy(char *to, const char *from, size_t size);

size_t	ft_strlcpy(char *to, const char *from, size_t size)
{
	if (size > 0 && size <= ft_strlen(from))
	{
		ft_memcpy(to, from, size - 1);
		to[size - 1] = '\0';
	}
	else if (size > ft_strlen(from))
	{
		ft_memcpy(to, from, ft_strlen(from));
		to[ft_strlen(from) + 1] = '\0';
	}
	return (ft_strlen(from));
}
