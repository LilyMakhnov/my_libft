#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *end_lst;

	end_lst = lst;
	while (lst)
	{
		end_lst = lst;
		lst = lst->next;
	}
	return (end_lst);
}