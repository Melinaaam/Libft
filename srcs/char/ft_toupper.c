/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:02:52 by memotyle          #+#    #+#             */
/*   Updated: 2024/05/25 13:03:49 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//convertit la lettre c en majuscule si c'est possible.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c = c - 32);
	else
		return (c);
}
