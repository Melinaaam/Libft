/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:07:34 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/14 19:46:08 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(char *base, int n)
{
	unsigned long long	nb;//pour pouvoir stocker des valeurs très grandes, y compris la version non signée des nombres négatifs.
	int					count;
	unsigned int		base_len;

	count = 0;
	base_len = ft_strlen(base);
	if (n < 0)
		nb = n + 4294967295 + 1;//convertion a une valeur non signee si nb est negatif, 4294967295 est la valeur maximale pour un unsigned int
		//Cette ligne de code en C effectue une opération mathématique sur la variable `n` et stocke le résultat dans la variable `nb`. Plus précisément, elle ajoute `4294967295` à `n` et ajoute ensuite `1` au résultat.
		//Cette opération peut sembler étrange, mais elle est utilisée pour effectuer une conversion de nombres négatifs en nombres positifs dans le contexte des entiers non signés de 32 bits.
		//En C, les entiers non signés de 32 bits ont une plage de valeurs allant de 0 à 4294967295. Lorsqu'un nombre négatif est stocké dans une variable non signée de ce type, il est interprété comme un nombre positif en utilisant une technique appelée "complément à deux".
		//Dans cette ligne de code, `4294967295` correspond à la valeur maximale possible pour un entier non signé de 32 bits. En ajoutant cette valeur à `n`, nous obtenons le complément à deux du nombre négatif stocké dans `n`. En ajoutant ensuite `1`, nous obtenons le nombre positif équivalent.
		//Cela peut être utile dans certains cas où nous voulons travailler avec des nombres positifs, même s'ils sont stockés sous forme de nombres négatifs dans des variables non signées de 32 bits.
		//Il est important de noter que cette opération peut entraîner un comportement indéfini si `n` dépasse la plage de valeurs des entiers non signés de 32 bits. Il est donc important de prendre en compte les limites de la plage de valeurs lors de l'utilisation de cette technique.
	else
		nb = (unsigned long long)n;//La longueur de la base (base_len) est le nombre de caractères uniques dans la base donnée (ex, 10 pour la base décimale, 16 pour l'hexa).
		//Cette condition vérifie si le nombre nb est supérieur ou égal à la longueur de la base (base_len).
	if (nb >= base_len)
		count += ft_putnbr_base(base, nb / base_len);//Si nb est >= à base_len, cela signifie qu'il y a plus d'un "chiffre" dans cette base.
		//La division entière de nb par base_len nous donne la partie supérieure du nombre dans cette base.
		//Par exemple, en base 10, si nb est 123, 123 / 10 donne 12, ce qui correspond à la partie supérieure de notre nombre.
	count += ft_putchar(base[nb % base_len]);//nb % base_len : Cette opération trouve le reste de la division de nb par base_len. Le reste est l'index du caractère correspondant dans la chaîne base.
		//ft_putchar(base[nb % base_len]) affiche le caractère correspondant à l'index calculé dans la chaîne base.
		//Accumulation de count : Le nombre de caractères imprimés (en général 1) est ajouté à count.
	return (count);
}

/*
La fonction ft_putnbr_base est appelée récursivement avec nb / base_len.
Chaque appel récursif traite la partie supérieure du nombre jusqu'à ce que nb soit inférieur à base_len,
c'est-à-dire jusqu'à ce qu'il ne reste qu'un seul chiffre dans la base.
Accumulation de count : Le nombre de caractères imprimés par chaque appel récursif est ajouté à count.
Ainsi, après chaque appel récursif, count contient le nombre total de caractères imprimés jusqu'à ce point.
        nb % base_len : Cette opération trouve le reste de la division de nb par base_len. Le reste est l'index du caractère correspondant dans la chaîne base.
            Par exemple, en base 10, si nb est 123, 123 % 10 donne 3, qui est le dernier chiffre du nombre.
        Affichage :
            ft_putchar(base[nb % base_len]) affiche le caractère correspondant à l'index calculé dans la chaîne base.
            Accumulation de count : Le nombre de caractères imprimés (en général 1) est ajouté à count.

Exemple de fonctionnement :

Prenons l'exemple où nous voulons convertir le nombre 123 en base 10.

    Premier appel :
        nb = 123, base_len = 10
        123 >= 10 est vrai, donc nous appelons ft_putnbr_base(base, 123 / 10) qui est ft_putnbr_base(base, 12).

    Deuxième appel :
        nb = 12, base_len = 10
        12 >= 10 est vrai, donc nous appelons ft_putnbr_base(base, 12 / 10) qui est ft_putnbr_base(base, 1).

    Troisième appel :
        nb = 1, base_len = 10
        1 < 10 est faux, donc nous passons à l'étape d'affichage.
        ft_putchar(base[1 % 10]) affiche base[1] qui est '1'.

    Retour au deuxième appel :
        Après l'appel récursif, nous affichons ft_putchar(base[12 % 10]) qui est base[2] qui est '2'.

    Retour au premier appel :
        Après l'appel récursif, nous affichons ft_putchar(base[123 % 10]) qui est base[3] qui est '3'.

Ainsi, les chiffres sont affichés dans l'ordre correct : '1', '2', '3'.
Résumé

La récursion permet de traiter le nombre par tranches, du chiffre le plus significatif au moins significatif. À chaque appel récursif, la partie supérieure du nombre est traitée jusqu'à ce que le nombre soit suffisamment petit pour être affiché directement. Ensuite, les chiffres sont affichés en ordre inversé de leur traitement, ce qui donne la représentation correcte du nombre dans la base spécifiée.

*/
