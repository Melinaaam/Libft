/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:10:11 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 11:10:20 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//function takes a list and a function pointer, and applies this function to each element of the list

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        (*f)(begin_list->data);//applique la fonction f sur le data de chaque element de la liste
        begin_list = begin_list->next;//passe au noeuf suivant
    }
}
