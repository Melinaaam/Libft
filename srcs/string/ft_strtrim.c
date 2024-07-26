/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:31:21 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/11 08:48:20 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
retourne copie de s1 dans 'ns' sans les caracteres specifies dans 'set',
au debut et a la fin de la chaine de caractere
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ns;//nlle chaine
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_strchr(set, s1[start]))//boucle continu si s1[start] n'est pas null et que start est present dans set
		start++;
	if (start != end || start >= end)//verifier si s1 est compose entierement de 'set'
	{
		while (end > start && ft_strchr(set, s1[end - 1]))//boucle pour trouver l'indice de fin
			end--;
	}
	ns = malloc(end - start + 1);
	if (!ns)
		return (NULL);
	ft_strlcpy (ns, &s1[start], end - start + 1);//copie de la sous chaine a partir de l'indice start dans ns
	ns[end - start] = '\0';
	return (ns);
}
/*
#include <stdio.h>
int	main()
{
	char	*str = "   Bonjour   ,   Monde    .";

	printf("Avant fonction : %s\n", str);
	printf("Apres fonction : %s\n", ft_strtrim(str," "));
	return (0);
}
*/
