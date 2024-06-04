/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:05:50 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 14:44:36 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères passée en argument pour créer
une nouvelle chaîne de caractères (avec malloc(3))
résultant des applications successives de ’f’.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	int				len;
	int				i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[len] = '\0';
	return (res);
}
/*
char	m_toupper(unsigned int i, char c)
{
	(void)i;
	return(char)ft_toupper((int)c);
}
#include <stdio.h>
int main()
{
	char s[] = "Hello";

	printf("Avant fonction ma chaine est : %s\n", s);
	printf("Apres ma fonction ma chaine est : %s\n", ft_strmapi(s, &m_toupper));

	return 0;
}
*/
