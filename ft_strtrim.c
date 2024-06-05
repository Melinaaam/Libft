/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:31:21 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:33:56 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ns;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start != end || start >= end)
	{
		while (end > start && ft_strchr(set, s1[end - 1]))
			end--;
	}
	ns = malloc(end - start + 1);
	if (!ns)
		return (NULL);
	ft_strlcpy (ns, &s1[start], end - start + 1);
	ns[end - start] = '\0';
	return (ns);
}
/*
#include <stdio.h>
int	main()
{
	char	*str = "   Bonjour   ,   Monde    .";

	printf("Avant fonction : %s\n", str);
	printf("Apres fonction : %s\n", ft_strtrim(str," "));
	return (0);
}
*/
