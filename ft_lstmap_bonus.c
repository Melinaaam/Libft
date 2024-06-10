/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:34:33 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 10:45:14 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elmt;

	new_lst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_elmt = malloc(sizeof (t_list));
		if (!new_elmt)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_elmt->content = f(lst->content);
		new_elmt->next = NULL;
		ft_lstadd_back(&new_lst, new_elmt);
		lst = lst->next;
	}
	return (new_lst);
}
/*#include <stdio.h>

void	del_node(void *node)
{
	free(node);
}

void	*upper(void *content)
{
	int	i;
	char	*str;
	char	*new_str;

	i = 0;
	str = (char *)content;
	new_str = ft_strdup(str);
	if (!new_str)
		return (NULL);
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
		i++;
	}
	return (new_str);
}
void	aff_list(t_list *lst)
{
	while (lst)
	{
		if (lst->content)
			printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*lst;
	t_list	*elem1 = ft_lstnew(ft_strdup("hello "));
	t_list	*elem2 = ft_lstnew(ft_strdup("bonjour "));
	t_list	*elem3 = ft_lstnew(ft_strdup("ola ? "));
	t_list	*elem4 = ft_lstnew(ft_strdup(" world "));
	t_list	*elem5 = ft_lstnew(ft_strdup("galaxy"));

	if (!elem1 || !elem2 || !elem3 || !elem4 || !elem5)
	{
		ft_lstclear(&lst, del_node);
		return (1);
	}

	lst = elem1;
	ft_lstadd_back(&lst, elem2);
	ft_lstadd_back(&lst, elem3);
	ft_lstadd_back(&lst, elem4);
	ft_lstadd_back(&lst, elem5);

	printf("Ma liste chainee avant ft_lstmap :\n");
	aff_list(lst);

	t_list	*new = ft_lstmap(elem1, upper, del_node);

	printf("\nMa nouvelle liste chainee apres ft_lstmap :\n");
	aff_list(new);

	ft_lstclear(&lst, del_node);
	ft_lstclear(&new, del_node);
	return (0);
}*/
