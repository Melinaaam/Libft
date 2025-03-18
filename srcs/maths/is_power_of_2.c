/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:02:47 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 11:04:44 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function returns 1 if the given number is a power of 2

int	is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	return((n & (n - 1)) == 0);
}
