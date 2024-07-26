/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:33:29 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/11 08:48:54 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
retourne une chaine issue de la chaine 's', commence a l'indice 'start'
et fait la longueur de 'len'
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;//creation ptr stocker nlle chaine
	size_t	len_s;//stocker la taille de 's'
	len_s = ft_strlen((char *)s);//appel a la fonction strlen pour calculer longueur de 's'
	if (!s)
		return (NULL);
	if (start >= len_s)//si mon indice ou commence la nlle chaine est plus grand que la taille demandee
		return (ft_strdup(""));//utilisation de strdup pour pouvoir retourner une chaine vide
	if (len > len_s - start)//si la taille demandee est > a la taille de 's'-indice de depart
		len = len_s - start;//on reajuste la taille demandee au reste de 's'-indice de depart
	ns = malloc(len + 1);//alloue de la place a ns
	if (!ns)
		return (NULL);
	ft_strlcpy (ns, s + start, len + 1);//si ns est pas nulle on copie dans la nouvelle chaine)
	return (ns);
}
/*
#include <stdio.h>
int	main()
{
	char	s[] = "hello world, Hello world";
	int	start = 5;

	printf("La chaine source est : %s\n", s);
	printf("La chaine retournee est : %s\n", ft_substr(s, start, 1));
	return(0);
}*/
