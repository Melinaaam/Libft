/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:45:43 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/06 16:43:30 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
copie jusuqu'a size -1 caracteres de la chaine src vers dest
et garanti qu'elle termine toujours par '\0'
evite debordement de memoire
retourne nb total de caracteres de src
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int		srcsize;
	size_t	i;

	srcsize = ft_strlen((char *)src);//calcul longeur de src
	i = 0;
	if ((dest == NULL) || (src == NULL))
		return (0);
	if (n == 0)
		return (srcsize);//si 0 a copier on retourne la taille de src
	while (src[i] && i < n - 1)//parcourt la cahine jusque '\0' ou n-1 pour laisser place au caractere de fin
	{
		dest[i] = src[i];//on copie caract par caract
		i++;
	}
	dest[i] = '\0'; //termine par le caract de fin car strlcpy garanti que ca se termine avec
	while (src[i])
		i++;
	return (i);//retourne le nb total de caract de src
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[15] = "Hola que tal ?";
	char	dest[13];

	printf("La chaine src : %s ", src);
	printf("est composee de %zu caractere.\n",ft_strlcpy(dest, src, 2));
	printf("Voici a quoi ressemble maintenant dest : %s", dest);
	return (0);
}
*/
