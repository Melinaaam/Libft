/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:33:29 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:33:59 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	len_s;

	len_s = ft_strlen((char *)s);
	if (!s)
		return (NULL);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	ns = malloc(len + 1);
	if (!ns)
		return (NULL);
	ft_strlcpy (ns, s + start, len + 1);
	return (ns);
}
/*
#include <stdio.h>
int	main()
{
	char	s[] = "hello world, Hello world";
	int	start = 5;

	printf("La chaine source est : %s\n", s);
	printf("La chaine retournee est : %s\n", ft_substr(s, start, 1));
	return(0);
}*/
