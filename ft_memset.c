/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:15:50 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 11:59:42 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
memset - Remplir une zone mémoire avec un octet donné
La  fonction  memset() remplit les n premiers octets de la zone
mémoire pointée par s avec l'octet c.
La fonction memset() renvoie un pointeur sur la zone mémoire s.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n--)
	{
		*ptr = c;
		ptr++;
	}
	return (s);
}
