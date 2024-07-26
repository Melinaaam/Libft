/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:45:59 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 10:04:07 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
fonction qui alloue de la memoire dynamique a l'aide de la heap(memoire dynamique).
diff avec malloc car elle remet a 0 la memoire allouee : elle la remplie de 0 avec bzero
*/
void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;//ptr pour stocker les 0
	size_t	longueur;

	longueur = n * size;
	if (n != 0 && longueur / n != size)
		return (NULL);
	ptr = malloc(longueur);//on lui cree une place
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, longueur);//rempli ptr avec bzero
	return (ptr);//retourne ptr
}
/*#include <stdio.h>
int	main(void)
{
	size_t	count = 4;
	size_t	size = sizeof(char);
	char	*tab = "Hey";

	printf("\nlongueur  : %zu ;", count * size);
	printf(" n  : %zu ;", count);
	printf(" size  : %zu \n", size);

	printf("\n\nTableau de char :\n");
	printf("%s\n", tab);

	tab = (char *)calloc(count, size);
    printf("\nResultat attendu :\n");
    printf("%s\n", tab);
	free(tab);

	tab = (char *)ft_calloc(count, size);
	printf("\nResultat obtenu :\n");
	printf("%s\n", tab);
	free(tab);
	return (0);
}*/
