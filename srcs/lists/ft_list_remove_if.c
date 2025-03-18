/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:09:10 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 11:09:21 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int(*cmp)())
{
	if(begin_list == NULL || *begin_list == NULL)
		return;
	t_list	*cur = *begin_list;//creation d'une varaible t_list temp qui nous sert d'index pour nous deplacer dans la liste

	if(cmp(cur->data, data_ref) == 0)//si == 0, cela veut dire que cmp retourne 0 donc la comparaison a trouve des egalites entre entre le noeuf et data_ref
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);//donc on supprime l'element qui concorde
	}
	else//si les donnees ne correspondent pas
	{
		cur = *begin_list;//
		ft_list_remove_if(&cur->next, data_ref, cmp);//on appllique la recurcion pour pouvoir passer a l'element suivant
	}
}
