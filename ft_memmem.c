#include "libft.h"

void	*ft_memmem(const void *h, size_t h_len, const void *n, size_t n_len);

void	*ft_memmem(const void *h, size_t h_len, const void *n, size_t n_len)
{
	unsigned char	*c_haystack;

	if (!h || !n)
		return (NULL);
	if (h_len == 0 || n_len == 0)
		return ((void *)h);
	c_haystack = (unsigned char *)h;
	while (h_len-- >= n_len)
	{
		if (!ft_memcmp(c_haystack, n, n_len))
			return (c_haystack);
		c_haystack++;
	}
	return (NULL);
}
