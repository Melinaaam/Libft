/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:18:23 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:32:10 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	char	s[] = "Hello";
	int		c = 'l';
	char *p;

	printf("Resultat avec la vraie fonction :\n");
	printf("Le premier %c de %s est :\n", c, s);
	p = memchr(s, c, 15);
	printf("%s\n", p);

	printf("Resultat avec ma fonction :\n");
	printf("le premier %c de %s est : \n", c ,s);
	p = ft_memchr(s, c, 15);
	printf("%s\n", p);
	return(0);
}
*/
