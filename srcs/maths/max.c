/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:03:07 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 11:04:57 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The function returns the largest number found in the array. 
int		max(int* tab, unsigned int len)
{
	int	result;
	unsigned int i = 0;

	if(len == 0)
		return(0);
	result = tab[i];
	while(i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return(result);
}
