/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:12:49 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 10:40:34 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction memcmp() compare les n premiers octets des zones mémoire s1 et s2.
Elle renvoie entier:
un entier inférieur, 		s1 < s2
égal,						s1 = s2
ou supérieur à zéro,		s1 > s2

fonctionne comme strcmp mais dans la memoire
*/

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;//comparer les octets
	unsigned char	*ptr2;

	ptr1 = (unsigned char *) str1;
	ptr2 = (unsigned char *) str2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	char	s1[] = "aello";
	char	s2[] = "hello";

	printf("Resultat avec la vraie fonction :\n");
	printf("%d\n", memcmp(s1, s2, 3));

	printf("Resultat avec ma fonction :\n");
	printf("%d\n", ft_memcmp(s1, s2, 3));

	return(0);


	return(0);
}
