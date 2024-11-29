#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*m;
	char		*t;

	t = s1;
	while (s1)
	{
		m = set;
		while (m)
		{
			if (ft_strchr(s1, *m))
				t = ft_strchr(s1, *m);
			if (ft_strrchr(s1, *m))
				t = ft_strrchr(s1, *m);
			m++;
		}
		s1++;
	}
	return (t);
}
