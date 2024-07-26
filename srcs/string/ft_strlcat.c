/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:58:02 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 11:30:34 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
concatene deux chaines sans risque de debordement
garanti que la taille totale de dest ne depasse pas size
retorune la longeur totale de la chaine apre concatenisation
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (size == 0)
		return (src_len);
	if (size <= dst_len)//si taille de dest est insuffisante
		return (src_len + size);//retourne somme de la longeur de src + taille de dest(size est le nb max de caracteres que l'ont peut copier dans dst)
	while (dst[i] && i < size - 1)
		i++;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
	char    dest[6] = "Hello";
        char    *src = " Wolrd";
	size_t	dstsiz = sizeof(dest);

	printf("Chaine dest : %s\n", dest);
	printf("Chaine src : %s\n", src);
	printf("Taille ideale de dest : %zu\n",ft_strlcat(dest, src, dstsiz));
	printf("Chaine dest apres ft_strlcat: %s\n", dest);
	return (0);
}

*/
