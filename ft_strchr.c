/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:08:10 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 11:56:14 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
cherche a partir du debut
La fonction strchr() renvoie un pointeur
sur la première occurrence du caractère c
dans la chaîne s.
Elle cherche le caractere c jusqu'au caract final \0 pas au dela
renvoit un pointeur sur le caractère correspondant ou NULL
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	char	s[] = "Hello";
	printf("%s\n", ft_strchr(s, '\0'));
	return (0);
}*/
