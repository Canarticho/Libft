#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;

	if (!lst || !f)
		return (NULL);
	if ((list = (t_list *)malloc(sizeof(t_list *))))
	{
		list = f(lst);
		if (lst->next)
			list->next = ft_lstmap(lst->next, f);
		return (list);
	}
	return (NULL);
}
