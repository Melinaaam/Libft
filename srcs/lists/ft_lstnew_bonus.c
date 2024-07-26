/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:16:21 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 16:00:14 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*liste chainee = enchainement de plusieurs listes*/

t_list *ft_lstnew(void *content)
{
	t_list	*list;//creation de ma liste

	list = (t_list *)malloc(sizeof(t_list)); //alloue de la place pour ma premiere liste
	if (list == NULL)
		return(NULL);
	list->content = content; //content : sert de contenant pour ce que je veux stocker dans mes listes
	list->next = NULL; //stocke l'element(liste) qui vient apres la liste qui la pointe(->)
	return(list);
}
#include <stdio.h>

int	main()
{
	char	*liste = "Helloooooo";
	t_list	*noeud = ft_lstnew(&liste);

	if(!noeud)
		return(1);
	printf("%s\n", *(char **)(noeud->content));
	free(noeud);
	return(0);
}
