/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:46:41 by memotyle          #+#    #+#             */
/*   Updated: 2024/07/25 19:30:44 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;//stock le nb de caracteres qui sera affiche a l'ecran

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count = count + ft_putchar('-');//compte le caractere '-' et on ecrit '-'
		nb = nb * -1;//convertitnb en +
	}
	if (nb > 9)
		count = count + ft_putnbr(nb / 10);//si nb > 9, divise par 10
	count = count + ft_putchar((nb % 10) + '0');//si on divise par 10 on recupere le modulo que l'on convertit en ascii
	return (count);
}
/*
exemple :

123
123 / 10
= 12.3
on stock le modulo : 3
12/10
= 1.2
on stock le modulo : 2
on recup le dernier chiffre qui n'est plus superieur a 9

resulat : 123

on stock tout dans count ce qui permet de savoirle nombre de caracteres aui sera imprime
*/
