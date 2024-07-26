/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:03:09 by memotyle          #+#    #+#             */
/*   Updated: 2024/07/25 15:08:43 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
converti un char vers un int
retourne le resultat de la conversion
*/

int	ft_atoi(const char *str)
{
	int		i;//parcourir la chaine de caractere
	int		neg;//utilise pour stocker le signe du nombre
	long	nb;//utilise pour stocker la valeur numerique

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')//si whitespace
		i++;//on avance dans la chaine
	if (str[i] == '-')//si 1er caractere est un signe '-'
		neg = -1;//variable neg est mise a jour en negatif pour savoir que le nombre est negatif
	if (str[i] == '-' || str[i] == '+')//si on rencontre un '-' ou '+'
		i++;//on continu
	while (ft_isdigit(str[i]))//appel de la fonction isdigit, utilisee pour parcourir la chaine tant que les caracteres sont des chiffres
	{
		nb = nb * 10 + str[i] - '0';//si c'est le cas, conversion en 'char' en enlevant la valeur de '0'
		i++;//passe au caractere suivant
	}
	return (nb * neg);// on multipli nb * neg pour prendre en comote le signe du nombre
}

#include <stdio.h>
int	main()
{
	char	str[] = "  	-+-123456hello";

	printf("Avec vrai fonction : \n");
	printf("%d\n", atoi(str));

	printf("Avec ma fonction : \n");
	printf("%d\n", ft_atoi(str));

	return(0);
}

