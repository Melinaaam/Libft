/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:34:33 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 17:20:31 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;
	int		len_lst;

	len_lst = ft_lstsize_bonus(*lst);
	if (!lst)
		return (NULL);
	while (len_lst)
	{
		temp = lst;
		f(temp->content);
		temp2 = temp->next;
		if(del)
		{
			del(temp->content);
			free (temp);
		}
		temp = temp2;
	}
	return(temp);
}
/*
#include <stdio.h>
#include <stdlib.h>
void	*add_one(void *content)
{
	int	*new;

	new = malloc(sizeof(int));
	if (!new)
		return (NULL);
	*new = *(int *)content + 1;
	return (new);
}

void	del(void *content)
{
	free(content);
}

void	aff_list(t_list **lst)
{
	t_list	*current;

	current = *lst;
	while (current)
	{
		printf("%s", (char *)current->content);
		current = current->next;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*elem1 = malloc(sizeof(t_list));
	t_list	*elem2 = malloc(sizeof(t_list));
	t_list	*elem3 = malloc(sizeof(t_list));

	if (!elem1 || !elem2 || !elem3)
	{
		if (elem1)
			free(elem1);
		if (elem2)
			free(elem2);
		if (elem3)
			free(elem3);
		return (1);
	}
	lst = elem1;
	elem1->content = malloc(sizeof(int));
	elem2->content = malloc(sizeof(int));
	elem3->content = malloc(sizeof(int));
	if (!elem1->content || !elem2->content || !elem3->content)
	{
		if (elem1->content)
			free(elem1->content);
		if (elem2->content)
			free(elem2->content);
		if (elem3->content)
			free(elem3->content);
		free(elem1);
		free(elem2);
		free(elem3);
		return (1);
	}
	*(int *)elem1->content = 1;
	*(int *)elem2->content = 2;
	*(int *)elem3->content = 3;
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	aff_list(lst);
	printf("\n");
	lst = ft_lstmap(lst, add_one, del);
	aff_list(lst);
	return (0);
}
*/
