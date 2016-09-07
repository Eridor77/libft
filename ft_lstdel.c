#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *alst;
	while (tmp->next != NULL)
	{
		(*del)(tmp->content, tmp->content_size);
		next = tmp->next;
		free(tmp);
		tmp = next;
		alst = NULL;
	}
}
