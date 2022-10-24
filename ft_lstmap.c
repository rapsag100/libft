#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*array;

	if (!lst || !f)
		return (NULL);
	array = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&array, del);
			return (NULL);
		}
		ft_lstadd_back(&array, new);
		new = new->next;
		lst = lst->next;
	}
	return (array);
}
