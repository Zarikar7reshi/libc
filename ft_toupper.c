#include "libft.h"

int	ft_toupper(int c);

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 0x20);
	return (c);
}
