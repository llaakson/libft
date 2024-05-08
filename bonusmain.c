/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonusmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:07:23 by llaakson          #+#    #+#             */
/*   Updated: 2024/05/07 20:13:54 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "libft.h"

void delete(void *content)
{
	free(content);
}

static void print_list(t_list *lst) 
{
	size_t	i;

	i = 0;
	while (lst)
   	{
		printf("%zu:%s\n", i, lst->content);
		lst = lst->next;
		i++;
	}
	printf("\n");
}

int main()
{
	printf("\n---BONUS---\n");

	char	*char1 = ft_strdup("ft_lstnew_char");
	char	*char2 = ft_strdup("ft_lstadd_front_char");
	char	*char3 = ft_strdup("ft_lstadd_back_char");

	t_list *first = ft_lstnew(char1);
	t_list **list = &first;

	printf("My linked list\n");
	print_list(*list);

	ft_lstadd_front(list,ft_lstnew(char2));
	print_list(*list);

	size_t listsize = ft_lstsize(*list);
	printf("Current list size is: %zu\n\n", listsize);

	printf("Last node is: %p\n\n", ft_lstlast(*list));

	ft_lstadd_back(list, ft_lstnew(char3));
	print_list(*list);

	ft_lstdelone(*list + 1, &delete);
	printf("ft_lstdelone:\n");
	print_list(*list);
						
	ft_lstadd_front(list, ft_lstnew(char3));
	print_list(*list);

	/*ft_lstclear(&first, delete);
	printf("ft_lstclear:\n");
	print_list(*list);*/


}
