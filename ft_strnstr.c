/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:58:26 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 12:00:18 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	 echercher une sous-chaîne dans une autre chaîne,
	 mais seulement dans les 'n' premiers caractères de la chaîne source.

	 Les caractères qui apparaissent après un caractère `\0' ne sont pas recherchés.

	 Si "Souschaine" est une chaîne vide, "chainP" est renvoyé ;
	 si "Souschaine" n'apparaît nulle part dans "chaineP", NULL est renvoyé ;
	 sinon, un pointeur vers le premier caractère de la première occurrence
	 de "Souschaine" est renvoyé.
*/

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
