#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	t = ft_lstlast(*lst);
	if (t)
		t->next = new;
	else
		*lst = new;
}
