/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:15:50 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 11:23:33 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
memset - Remplir une zone mémoire avec un octet donné
La  fonction  memset() remplit les n premiers octets de la zone
mémoire pointée par s avec l'octet c.
La fonction memset() renvoie un pointeur sur la zone mémoire s.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;// un unsigned char permet de representer des valeurs positives
	//unisgned char est utilise pour travailler sur des octets ou des valeurs numeriques sans signes
	ptr = (unsigned char *) s;//ptr est utilise pour pointer sur le debut de la zone memoire 's'
	while (n--)//decremente 'n' et continu jusqu'a ce que n != 0
	{
		*ptr = c;//assigne la valeur 'c' caste en unsigned char
		ptr++;//avance le pointeur ptr
	}
	return (s);// retourne 's' pour permettre de continuer a travailler avc cette zone memoire
}
/*
Adresse :  |  0x01  |  0x02  |  0x03  |  0x04  |  0x05  |
Valeur :   |  65    |  ??    |  ??    |  ??    |  ??    |
ptr ->         |

ptr est assigne par exemple a A
n est decremente

Adresse :  |  0x01  |  0x02  |  0x03  |  0x04  |  0x05  |
Valeur :   |  65    |  65    |  ??    |  ??    |  ??    |
ptr ->                  |
etc...
*/
/*
#include <string.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    int intArray[5];
    char charArray[10];
    char    str[] = "Hello bonjour ?";

    printf("%s\n", str);
    ft_memset(str + 5, '!', 2);
    printf("%s\n", str);


    // memset
    memset(intArray, INT_MAX, sizeof(intArray));

    memset(charArray, 'A', sizeof(charArray));

    printf("MEMSET\n");
    printf("tableau de int :\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", intArray[i]);
    printf("\n");

    printf("tableau de char :\n");
    for (int i = 0; i < 10; i++)
        printf("%c ", charArray[i]);
    printf("\n \n");

    // ft_memset
    ft_memset(intArray, INT_MAX, sizeof(intArray));

    ft_memset(charArray, 33, sizeof(charArray));

    printf("FT_MEMSET\n");
    printf("tableau de int :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");

    printf("tableau de char :\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", charArray[i]);
    }
    printf("\n");
}*/
