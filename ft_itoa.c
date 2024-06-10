/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:27:53 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 09:42:43 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_number(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*rempli_chaine(char *str, int n, int sign, int j)
{
	int	i;

	i = j - 1;
	if (sign == 1)
		str[0] = '-';
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;
	int		sign;

	j = 0;
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	j = count_number(n);
	if (n < 0)
	{
		n = n * -1;
		j = 1 + count_number(n);
		sign = 1;
	}
	else
		j = count_number(n);
	str = malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	rempli_chaine(str, n, sign, j);
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	int	n;

	n = -10;

	printf("Avant itoa : %d\n", n);
	printf("Apres itoa : %s\n", (ft_itoa(n)));
	return(0);
}*/
