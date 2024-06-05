/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:45:43 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:33:25 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int		srcsize;
	size_t	i;

	srcsize = ft_strlen((char *)src);
	i = 0;
	if ((dest == NULL) || (src == NULL))
		return (0);
	if (n == 0)
		return (srcsize);
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[15] = "Hola que tal ?";
	char	dest[13];

	printf("La chaine src : %s ", src);
	printf("est composee de %zu caractere.\n",ft_strlcpy(dest, src, 2));
	printf("Voici a quoi ressemble maintenant dest : %s", dest);
	return (0);
}
*/
