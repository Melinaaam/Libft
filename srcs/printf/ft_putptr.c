/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:17:45 by memotyle          #+#    #+#             */
/*   Updated: 2024/07/25 19:30:47 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(void *ptr, char *base, int x)
{
	int					count;
	unsigned long long	ptr_nb;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));//"null" pour les pointeurs
	count = 0;
	if (x == 0)//index
	{
		count = ft_putstr("0x");//on stock '0x' dans count et on l'ecrit
		x++;
	}
	ptr_nb = (unsigned long long)ptr;//En effectuant cette conversion, la valeur du pointeur ptr est copiée dans la variable ptr_nb, permettant ainsi de manipuler cette valeur comme un entier non signé.
	if (ptr_nb >= 16)//si >16 ondoit le diviser par 16
		count += ft_putptr((void *)(ptr_nb / 16), base, x);//recursif si ptr_nb > 16
	count += ft_putchar(base[ptr_nb % 16]);//stck lemodulo
	return (count);
}
/*
exemple:

ptr_nb = 4660
count = count + 4660/16
= 291.4
on stock : 4
291/16
= 12.3
on stock : 3
18/2
= 1.2
on stock : 2
1 est < 16 alors on stock : 1

ce qui donne 1234, la valeur de 4660 en base 16 est 1234
*/
