#include "libft.h"

t_list	*ft_lstadd_back(t_list **list, t_list *new);

t_list	*ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last;

	if (*list == NULL)
		*list = new;
	else
	{
		last = ft_lstlast(*list);
		last->next = new;
	}
	return (*list);
}
