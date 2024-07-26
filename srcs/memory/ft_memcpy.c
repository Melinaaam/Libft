/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:20:51 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/03 17:15:19 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copier une zone mémoire
La  fonction memcpy() copie n octets depuis la zone mémoire src
vers la zone mémoire dest.
Les deux zones ne doivent pas se chevaucher.
La fonction memcpy() renvoie un pointeur sur dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sd;//ptr pour manipuler octets
	unsigned char	*sc;//ptr pour manipuler octets
	size_t			i;//index que positif pour la boucle

	sd = (unsigned char *)dest;//qui va pointer vers memoire dest
	sc = (unsigned char *)src;//qui va pointer vers memoire src
	i = 0;
	if ((!sd || !sc))//verif si && ou ||
		return (NULL);//proteger si dest ou src sont nuls
	while (i < n)//parcours les n octets a copier
	{
		((char *)sd)[i] = ((char *)sc)[i];//a chaque iteration, l'octet i de src est copie dans l'octet i de dest
		i++;
	}
	return (sd);//retourne ptr vers memoire de dest
}
/*
#include <stdio.h>

int	main()
{
	char	src[10] = "";
	char	dest[10] = "";

	printf("%s\n", (char *)ft_memcpy(dest, src, 3));
	return (0);
}

*/
