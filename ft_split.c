/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:07:59 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 14:47:42 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
retourne un tableau de chaine de caractere obtenu
en separant 's' a l'aide du caractere 'c'==> utilise comme delimitateur
le tableau doit etre termine par NULL
*/

void	libere_tab(char **strs, int i)
{
	while (i >= 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
}

int	comptage_mots(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*copier_mots(const char *s, int debut, int fin)
{
	char	*mot;
	int		i;

	mot = malloc((sizeof (char) * (fin - debut + 1)));
	if (!mot)
		return (NULL);
	i = 0;
	while (debut < fin)
	{
		mot[i] = s[debut];
		i++;
		debut++;
	}
	mot[i] = '\0';
	return (mot);
}

char	**remplacer_mots(char const *s, char c, char **strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			strs[j] = copier_mots(s, k, i);
			if (!strs[j])
				return (libere_tab(strs, j), NULL);
			j++;
		}
		else
			i++;
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = malloc(sizeof (char *) * (comptage_mots(s, c) + 1));
	if (!strs)
		return (NULL);
	strs = remplacer_mots(s, c, strs);
	return (strs);
}
