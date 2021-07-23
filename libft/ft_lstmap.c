#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (new == NULL)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	while (lst->next != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
			ft_lstclear(&tmp, del);
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
