/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:20:51 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:32:21 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sd;
	unsigned char	*sc;
	size_t			i;

	sd = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (!sd && !sc)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)sd)[i] = ((char *)sc)[i];
		i++;
	}
	return (sd);
}
/*
#include <stdio.h>

int	main()
{
	char	src[10] = "";
	char	dest[10] = "";

	printf("%s\n", (char *)ft_memcpy(dest, src, 3));
	return (0);
}

*/
