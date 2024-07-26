/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:58:26 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 11:29:53 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	 Rechercher une sous-chaîne dans une autre chaîne,
	 mais seulement dans les 'n' premiers caractères de la chaîne source.

	 Les caractères qui apparaissent après un caractère `\0' ne sont pas recherchés.

	 Si "Souschaine" est une chaîne vide, "chainP" est renvoyé ;
	 si "Souschaine" n'apparaît nulle part dans "chaineP", NULL est renvoyé ;
	 sinon, un pointeur vers le premier caractère de la première occurrence de "Souschaine" est renvoyé.
*/

char	*ft_strnstr(const char *chaineP, const char *SousChaine, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*SousChaine == '\0')//verifie si la souschaine est vide
		return ((char *)chaineP);//si oui on retourne la chaineP
	while (chaineP[i] && i < len)//boucle pour parcourir chaque caractere de chaineP tant que la limite de la longueur n'est pas atteinte
	{
		j = 0;//a chaque iteration, j est remis a 0
		while (chaineP[i + j] == SousChaine[j] && i + j < len)// on compare les caracteres des 2 chaines, la comparaison se fait tant que les caracteres sont identiques et qu'on a pas atteint la limite
		{
			if (!SousChaine[j + 1])//si fin de souschaine = trouve une correspondance complete
				return ((char *)chaineP + i);//retourne un ptr vers le debut de la correspondance
			j++;//si correspondance partielle on incremente j pour passer au caractere suivant
		}
		i++;//passe au prochain caractere de la chaineP
	}
	return (NULL);
}
#include <stdio.h>

int	main(void)
{
	char	SousChaine[] = "";
	char	chaineP[19] = "La terre est ronde";

        printf("SousChaine : %s\n", SousChaine);
        printf("chaineP : %s\n", chaineP);
	printf("Resultat obtenu : %s", ft_strnstr(chaineP, SousChaine, 19));
}
