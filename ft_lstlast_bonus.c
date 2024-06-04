/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:19:01 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 17:20:18 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Renvoie le dernier élément de la liste
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return(NULL);
	while (lst != '\0')
	{
		lst = lst->next;
	}
	return (lst);
}
