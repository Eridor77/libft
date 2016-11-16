#include "libft.h"

void	ft_lstback(t_list **alst, void const *content, size_t content_size)
{
	t_list	*list;

	list = *alst;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_lstnew(content, content_size);
	}
	else
		*alst = ft_lstnew(content, content_size);
}
