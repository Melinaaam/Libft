/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:34:33 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 14:47:29 by memotyle         ###   ########.fr       */
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
