/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsallei <wsallei@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 16:14:35 by wsallei           #+#    #+#             */
/*   Updated: 2020/05/12 16:35:55 by wsallei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp;
	t_list *lstnew;
	t_list *newtmp;

	if (!lst || !f || !del)
		return (NULL);
	tmp = lst->next;
	if (!(lstnew = (ft_lstnew(f(lst->content)))))
		return (NULL);
	newtmp = lstnew->next;
	while (tmp)
	{
		if (!(newtmp = ft_lstnew(tmp->content)))
		{
			ft_lstclear(&lstnew, del);
			free(lstnew);
			return (NULL);
		}
		f(newtmp->content);
		ft_lstadd_back(&lstnew, newtmp);
		tmp = tmp->next;
	}
	return (lstnew);
}
