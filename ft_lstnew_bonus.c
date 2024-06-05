/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:16:21 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:35:35 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
/*
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
*/
