/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:46:51 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/10 10:08:33 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*vérifie si c est un unsigned char sur 7 bits,
entrant dans le jeu de caractères ASCII.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
#include <stdio.h>
int	main()
{
	int	c;

	c = 1;
	printf("%d\n", ft_isascii(c));
	return(0);
}
