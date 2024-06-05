/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:58:26 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:33:45 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *chaineP, const char *SousChaine, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*SousChaine == '\0')
		return ((char *)chaineP);
	while (chaineP[i] && i < len)
	{
		j = 0;
		while (chaineP[i + j] == SousChaine[j] && i + j < len)
		{
			if (!SousChaine[j + 1])
				return ((char *)chaineP + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
