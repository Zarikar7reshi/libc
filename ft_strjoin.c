#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*m;

	m = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strlcpy(m, s1, ft_strlen(s1) + 1);
	ft_strlcat(m, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (m);
}
