#include "libft.h"

#include "libft.h"

char	*ft_strrchr(const char *string, int c);

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen(string) - 1;
	string += i;
	while (i--)
	{
		if (*string == c)
			return ((char *)string);
		string--;
	}
	return (NULL);
}
