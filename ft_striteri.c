/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:05:56 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:33:12 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include "libft.h"

void m_toupper(unsigned int i, char *c)
{
	*c = (char)ft_toupper((int)*c);
}
int main()
{
	char s[] = "Hello";

	printf("Avant fonction ma chaine est : %s\n", s);
	ft_striteri(s, &m_toupper);
	printf("Apres ma fonction ma chaine est : %s\n", s);

	return 0;
}
*/
