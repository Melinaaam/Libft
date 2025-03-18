/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:58:41 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 10:59:09 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_bits(unsigned char octet)
{
	int				i = 8;
	unsigned char	bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';//L'opérateur de décalage à droite (>>)
									//déplace les bits de octet vers la droite de i positions.
		write(1, &bit, 1);
	}
}
