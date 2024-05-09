/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:50:57 by llaakson          #+#    #+#             */
/*   Updated: 2024/05/09 21:43:32 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	printf("start\n");	
	t_list *newlist;
	t_list *returnlist;

	if (!lst || !f || !del)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (NULL);
	returnlist = newlist;
	lst = lst->next;
	printf("1\n");
	while (lst)
	{
		newlist->next = ft_lstnew(f(lst->content));
		printf("2\n");
		if (!newlist->next)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		newlist = newlist->next;
		lst = lst->next;
	}
	newlist->next = NULL;
	return (returnlist);
}
