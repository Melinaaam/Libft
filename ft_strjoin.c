/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:54:53 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:33:19 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*stemp;
	int		len1;
	int		len2;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	if (!s1 || !s2)
		return (NULL);
	stemp = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!stemp)
		return (NULL);
	ft_memcpy(stemp, s1, len1);
	ft_memcpy(stemp + len1, s2, len2);
	stemp[len1 + len2] = '\0';
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
