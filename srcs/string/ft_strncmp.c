/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:40:15 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 09:33:26 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
compare n caractere de deux chaines et renvoi :
-1 si s1 < s2
0 si s1 = s2
+1 si s1 > s2
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;//decla ptr non signes
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] && str2[i])
	{
		if (str1[i] != str2[i])//si different
			return (str1[i] - str2[i]);//on soustrait
		i++;
	}
	if (i < n)
		return (str1[i] - str2[i]);
	return (0);
}

#include <stdio.h>

int	main()
{
	char	s1[] = "Hz";
	char	s2[] = "H";

	printf("%d\n", ft_strncmp(s1, s2, 2));
	return(0);
}
