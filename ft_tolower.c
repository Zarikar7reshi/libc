#include "libft.h"

int	ft_tolower(int c);

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 0x20);
	return (c);
}
