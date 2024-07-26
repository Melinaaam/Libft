/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsi_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:15:17 by memotyle          #+#    #+#             */
/*   Updated: 2024/07/25 19:30:56 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsi_dec(unsigned int nb)
{
	int		count;//count characters

	count = 0;
	if (nb > 9)
		count = count + ft_putnbr(nb / 10);//stock dans count le total de char affiche
		//divise par 10 pour traiter tous les chiffres du nombres sauf le dernier
	count = count + ft_putchar((nb % 10) + '0');//extraire dernier chiffre du nombre et ajoute '0' pour covertion
	return (count);
}
