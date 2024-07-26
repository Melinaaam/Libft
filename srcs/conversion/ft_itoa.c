/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:27:53 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 10:10:18 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
convertit un entier vers string
retourne chaine de caracteres representant l'entier 'n' recu en argument.
Les nombres neg doivent etre geres.
*/
int	count_number(int n)//compte le nombre de chiffre dans un entier donne
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;//exemple si 'n' est 1234, si /10 devient 123 etc...
		i++;//compteur qui enregistre nombre de chiffres
	}
	return (i);//nombre de chiffres dans 'n'
}

char	*rempli_chaine(char *str, int n, int sign, int j)//remplit chaine avec les chiffres de l'entier 'n'
{
	int	i;

	i = j - 1;//permet de parcourir la chaine de la fin vers le debut
	if (sign == 1)//veut dire que l'entier est neg
		str[0] = '-';
	while (n > 0)
	{
		str[i] = n % 10 + '0';//donne le dernier chiffre de n, +'0' pour convertir en ascii
		n = n / 10;
		i--;
	}
	str[j] = '\0';
	return (str);//str remplie avec les chiffres de 'n'
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;
	int		sign;

	j = 0;
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));//gere int MIN
	if (n == 0)
		return (ft_strdup("0"));
	j = count_number(n);//compter le nombre de chiffres 'n' grace a count_number
	if (n < 0)
	{
		n = n * -1;//convertit en positif
		j = 1 + count_number(n);//ajuster j pour inclure le signe negatif
		sign = 1;//indique que l'entier innitial etait negatif
	}
	else
		j = count_number(n);//stocke dans j le nombre de chiffre cotenu dans 'n'
	str = malloc(sizeof(char) * (j + 1));//alloue place de char + le nombre de chiffre stocke dans 'j' +'\0' dans str
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
