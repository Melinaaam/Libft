/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:18:23 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 10:36:04 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La fonction memchr() examine les n premiers octets de la zone mémoire
pointée par s à la recherche du caractère c.
Elle cherche le caractere c meme au dela du caract final \0
renvoit un pointeur sur l'octet correspondant ou NULL
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;//pour parcourir les octets

	ptr = (unsigned char *) s;//ptr pour stocker le caract trouve
	while (n--)//commence par la fin
	{
		if (*ptr == (unsigned char)c)//si correspondance
			return (ptr);//retourne le ptr
		ptr++;//sinon continu
	}
	return (NULL);
}
#include <stdio.h>
int	main()
{
	char	s[] = "Hello";
	int		c = 'l';
	char *p;

	printf("Resultat avec la vraie fonction :\n");
	printf("Le premier %c de %s est :\n", c, s);
	p = memchr(s, c, 15);
	printf("%s\n", p);

	printf("Resultat avec ma fonction :\n");
	printf("le premier %c de %s est : \n", c ,s);
	p = ft_memchr(s, c, 15);
	printf("%s\n", p);

	return(0);


	return(0);
}
