/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:19:59 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 11:58:48 by memotyle         ###   ########.fr       */
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
	char	*chr;

	chr = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			chr = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (chr);
}
/*
#include <stdio.h>
int	main()
{
	char	s[]="Hello";
	printf("%s\n",ft_strrchr(s, 'e'));
	return(0);
}*/
