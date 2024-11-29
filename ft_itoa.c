#include "libft.h"

char	*ft_itoa(int n);

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == INT_MIN)
		return ("-2147483648");
	// if (n < 0)
	// {
	// 	s = (char *)calloc(12, 1);
	// 	s[0] = '-';
	// 	i = 1;
	// }
	// else
	// {
	// 	s = (char *)calloc(11, 1);
	// 	i = 0;
	// }
	// while (n / 10 > 0)
	// {
	// 	s[i] = n / 10 + 0x30;
	// 	n /= 10;
	// 	i++;
	// }
	// s[i] = n + 0x30;
	return (s);
}
