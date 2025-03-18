/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:59:30 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 10:59:37 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// #include <stdio.h>

// int main()
// {
// 	// Exemple d'octet à tester
// 	unsigned char octet = 0b11001100;  // Vous pouvez changer cette valeur pour tester d'autres octets
// 	unsigned char result = swap_bits(octet);

// 	// Affichage des résultats
// 	printf("Octet d'origine: 0x%02X (%c%c%c%c %c%c%c%c en binaire)\n",
// 		octet,
// 			(octet & 0x80) ? '1' : '0', (octet & 0x40) ? '1' : '0',
// 			(octet & 0x20) ? '1' : '0', (octet & 0x10) ? '1' : '0',
// 			(octet & 0x08) ? '1' : '0', (octet & 0x04) ? '1' : '0',
// 			(octet & 0x02) ? '1' : '0', (octet & 0x01) ? '1' : '0');
// 	printf("Octet modifié: 0x%02X (%c%c%c%c %c%c%c%c en binaire)\n",
// 			result,
// 			(result & 0x80) ? '1' : '0', (result & 0x40) ? '1' : '0',
// 			(result & 0x20) ? '1' : '0', (result & 0x10) ? '1' : '0',
// 			(result & 0x08) ? '1' : '0', (result & 0x04) ? '1' : '0',
// 			(result & 0x02) ? '1' : '0', (result & 0x01) ? '1' : '0');

//     return 0;
// }
