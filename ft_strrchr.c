/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:19:59 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:33:49 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;

	chr = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			chr = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (chr);
}
/*
#include <stdio.h>
int	main()
{
	char	s[]="Hello";
	printf("%s\n",ft_strrchr(s, 'e'));
	return(0);
}*/
