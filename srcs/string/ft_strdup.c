/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:27:57 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 12:10:48 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
crée une copie dynamique d'une chaîne de caractères.
1. Elle prend un argument : un pointeur vers la chaîne de caractères à copier.
2. Elle détermine la longueur de la chaîne à copier.
3. Elle alloue suffisamment de mémoire pour stocker une copie de la chaîne,
y compris l'octet nul de fin de chaîne.
4. Elle copie la chaîne dans la nouvelle zone de mémoire.
5. Elle renvoie un pointeur vers la copie de la chaîne.

Si l'allocation de mémoire échoue , `strdup` renvoie NULL.
*/

char	*ft_strdup(const char *s)
{
	char	*copy;//stocker la copie de la chaine
	int		len_s;//stocker la longueur de s
	int		i;//parcourir et compter dans la boucle

	len_s = ft_strlen((char *)s);//on calcul la longeur de s et on la stocke dans len_s
	copy = malloc((len_s + 1) * sizeof(char));// alloue une place pour la copie, la taille est difinie avec sizeof(char) =>la taille d'un octet + (len_s+1)=>taille de s + caractere de fin
	i = 0;
	if (copy == 0)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];//on copie s[i] dans copy[i]
		i++;
	}
	copy[i] = '\0';//on rajoute le caractere de fin
	return (copy);//on retourne copy
}
/*
#include <stdio.h>
int	main()
{
	char	s[] = "Hello World 000";
	char	*cpy;

	printf("Avec vraie fonction : \n");
	printf("La chaine src est : %s\n", s);
	cpy = strdup(s);
	printf("La chaine dupliquee est : %s\n", cpy);
	free(cpy);

	printf("Avec ma fonction : \n");
	printf("La chaine src est : %s\n", s);
	cpy = ft_strdup(s);
	printf("La chaine dupliquee est : %s\n", cpy);
	free(cpy);

	return(0);
}
*/
