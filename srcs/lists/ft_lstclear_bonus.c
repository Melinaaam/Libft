/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:38:47 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 16:18:24 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Supprime et libère la mémoire de l’élément passé en
paramètre, et de tous les éléments qui suivent, à
l’aide de ’del’ et de free(3)
Enfin, le pointeur initial doit être mis à NULL
*/

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*temp2;

	if (!lst)
		return;
	temp = *lst;//initialise temp avec le premier element de la liste
	while (temp)
	{
		temp2 = temp->next;//temp2 sauvegarde le prochain element de la liste avant sa suppression
		if (del)
			del(temp->content);//adresse fonction permettant de supprimer le contenu de l’élément
		free(temp);
		temp = temp2;
	}
	*lst = NULL;
}
/*
#include <stdio.h>
void	del_node(void *node)
{
	free(node);
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
	t_list	**lst;
	t_list	*elem1 = malloc(sizeof(t_list));
	t_list	*elem2 = malloc(sizeof(t_list));
	t_list	*elem3 = malloc(sizeof(t_list));
	t_list	*elem4 = malloc(sizeof(t_list));

	if (!elem1 || !elem2 || !elem3 || !elem4)
	{
		if (elem1)
			free(elem1);
		if (elem2)
			free(elem2);
		if (elem3)
			free(elem3);
		if (elem4)
			free(elem4);
		return (1);
	}

	lst = &elem1;
	elem1->content = ft_strdup("Hola ");
	elem1->next = elem2;
	elem2->content = ft_strdup("hola, ");
	elem2->next = elem3;
	elem3->content = ft_strdup("que ");
	elem3->next = elem4;
	elem4->content = ft_strdup("tal ?");
	elem4->next = NULL;

	printf("Ma liste chainee avant ft_lstclear :\n");
	aff_list(lst);

	ft_lstclear(&elem2, del_node);
	elem1->next = NULL;

	printf("\nMa liste chainee apres fr_lstclear :\n");
	aff_list(lst);

	ft_lstclear(lst, del_node);
	return (0);
}*/
