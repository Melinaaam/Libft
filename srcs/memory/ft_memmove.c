/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:32:30 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/03 17:18:49 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Cette fonction permet de copier un bloc de mémoire spécifié
différence avc memcpy : fonction memmove accepte que les deux zones de mémoire
puissent se chevaucher.

Par exemple tu as la seule et unique chaine "123456",
et que tu veuille la transformer en "1123456",
il te suffira de copier la suite "123456" à partir du '2'.
*/

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*src;

	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	if (src == dest || n == 0)
		return (dest);//si rien a copier retourne dest
	if (dest > src && dest < src + n)//verifi si dest et src se chevauchent
	{
		while (n--)//si chevauchement, copie depuis la fin
			dest[n] = src[n];//copie n octet par octet
	}
	else
		ft_memcpy(dest, src, n);//si pas de chevauchement on utilise memcpy
	return (destination);
}
