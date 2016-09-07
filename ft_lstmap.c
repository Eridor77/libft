#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *plist;
	t_list *nlist;

	if (!lst)
		return (NULL);
	nlist = ft_lstnew(lst->content, lst->content_size);
	if (!nlist)
		return (NULL);
	nlist = f(lst);
	plist = nlist;
	while (lst->next)
	{
		plist->next = f(lst->next);
		plist = plist->next;
		lst = lst->next;
	}
	return (nlist);
}
