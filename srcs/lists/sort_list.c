/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:07:05 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 11:27:47 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int     swap;
    t_list  *start;

    start = lst;

    while (lst && lst->next)
    {
        if ((*cmp)(lst->i, lst->next->i) == 0)
        {
            swap = lst->i;
            lst->i = lst->next->i;
            lst->next->i = swap;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return start;
}
