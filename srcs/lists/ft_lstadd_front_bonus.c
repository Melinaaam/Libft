/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 09:19:52 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 16:04:11 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Ajoute l’élément ’new’ au début de la liste
*/

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)//si liste est vide
	{
		*lst = new; //si lst est vide rien a faire juste lst prend la place de new
	}
	else
	{
		new->next = *lst;//SINON, apres new c'est le pointeur lst
		*lst = new;//lst = a new pour que new passe devant lst avec son pointeur
	}
}
/*
#include <stdio.h>
void	aff_list(t_list *lst)
{
	if (!lst)
	{
		printf("La liste est vide\n");
		return ;
	}
	while(lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*elem1 = malloc(sizeof(t_list));
	t_list	*elem2 = malloc(sizeof(t_list));

	if (!elem1 || !elem2)
	{
		if (elem1)
			free(elem1);
		if (elem2)
			free(elem2);
		return (1);
	}

	lst = elem1;
	elem1->content = " 27 ";
	elem1->next = elem2;
	elem2->content = " 28 ";
	elem2->next = NULL;

	printf("Ma liste chainee avant ft_lstadd_front :\n");
	aff_list(lst);

	t_list	*new = malloc(sizeof(t_list));
	if (!new)
		return (1);
	new->content = " 26 ";
	ft_lstadd_front(&lst, new);

	printf("\nMa liste chaine apresft_lstadd_front :\n");
	aff_list(lst);

	free(new);
	free(elem1);
	free(elem2);
	return (0);
}
*/
