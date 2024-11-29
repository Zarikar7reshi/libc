#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size);

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	p = malloc(nitems * size);
	ft_bzero(p, nitems * size);
	return (p);
}
