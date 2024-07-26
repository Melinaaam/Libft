/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:54:53 by memotyle          #+#    #+#             */
/*   Updated: 2024/07/23 18:58:02 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
retourne nlle chaine qui est le resultat de la concatenisation de s1 et s2
sans modifier la chaine de destination
alloue memoire necessaire
*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*stemp;//ptr pour stocker le result de la concatenisation
	int		len1;
	int		len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	if (!s1 || !s2)
		return (NULL);
	stemp = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!stemp)
		return (NULL);
	ft_memcpy(stemp, s1, len1);//copy s1 dans stemp
	ft_memcpy(stemp + len1, s2, len2);//puis copy de s2 dans stemp securise par "stemp + len1)"
	stemp[len1 + len2] = '\0';//rajout caractere de fin (autre diff avec strcat)
	return (stemp);
}
/*
#include <stdio.h>

int	main ()
{
	char	*str1 = "lorem ipsum--";
	char	*str2 = "++dolor sit amet";
	char	*resultat = ft_strjoin(str1, str2);

	printf("%s\n", str1);
	printf("%s\n",str2);
	printf("%s\n", resultat);
	free(resultat);
	return (0);
}*/
