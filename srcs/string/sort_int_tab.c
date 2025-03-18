/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:24:00 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 11:24:12 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	sort_int_tab(int *tab, unsigned int size)
{
	int	i = 0;
	unsigned int compare = 0;

	if (size <= 1)
		return ;
	while (compare < size)
	{
		i = 0;
		while (i < (size -1))
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		compare++;
	}
}
