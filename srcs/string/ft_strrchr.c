/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:19:59 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 08:36:20 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
cherche a partir de la fin ou continu de chercher meme si le caractere est trouve
La fonction strrchr() renvoie un pointeur sur la dernière occurrence
du caractère  c  dans la chaîne s.
renvoit un pointeur sur le caractère correspondant,ou NULL
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;//pointeur pour stocker l'adresse de la derniere occurence de 'c'

	chr = NULL;//remis a 0 a chaque fois que le caractere est trouve
	while (*s != '\0')
	{
		if (*s == (char)c)//compare chaque caractere de 's' a 'c'
		{
			chr = (char *)s;// si 's'='c', on stocke le resultat dans chr
		}
		s++;//on continu de chercher meme si c est trouve
	}
	if (c == '\0')//vérifie si le caractère recherché c est le caractère nul
	{
		return ((char *)s);//si oui on retourne null dans 's'
	}
	return (chr);//si ps le caractere null, on retourne ce que contient chr, meme si une occurence est trouve deux fois il renvoi la derniere
}

#include <stdio.h>
int	main()
{
	char	s[]="Hello";
	printf("%s\n",ft_strrchr(s, 'e'));
	return(0);
}
