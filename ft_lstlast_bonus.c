/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:19:01 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 10:28:04 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*#include <stdio.h>

void	aff_list(t_list *lst)
{
	while (lst)
	{
		if (lst->content)
			printf("%s", (char *)lst->content);
		lst = lst->next;
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
	elem1->content = "Hello";
	elem1->next = elem2;
	elem2->content = " bonjour";
	elem2->next = elem3;
	elem3->content = " ola";
	elem3->next = NULL;

	printf("Ma liste chainee :\n");
	aff_list(lst);

	t_list	*last = ft_lstlast(lst);
	printf("\nDernier element de ma liste chainee :\n");
	printf("%s\n", (char *)last->content);

	free(elem1);
	free(elem2);
	free(elem3);

	return (0);
}*/
