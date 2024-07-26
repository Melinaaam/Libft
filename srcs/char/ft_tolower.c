/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:10:35 by memotyle          #+#    #+#             */
/*   Updated: 2024/05/25 11:31:18 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//convertit la lettre c en minuscule si c'est possible.

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c = c + 32);
	else
		return (c);
}
