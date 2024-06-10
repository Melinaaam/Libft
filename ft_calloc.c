/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:45:59 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 09:24:40 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	longueur;

	longueur = n * size;
	if (n != 0 && longueur / n != size)
		return (NULL);
	ptr = malloc(longueur);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, longueur);
	return (ptr);
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
