#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t size);

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	void	*saveto;

	saveto = to;
	while (size--)
		*(unsigned char *)to++ = *(unsigned char *)from++;
	return (saveto);
}
