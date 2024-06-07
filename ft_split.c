/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:07:59 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/07 14:34:11 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
retourne un tableau de chaine de caractere obtenu
en separant 's' a l'aide du caractere 'c'==> utilise comme delimitateur
le tableau doit etre termine par NULL
*/
void	libere_tab(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

int	count_words(const char *s, char c)
{
	int	count_words;
	int	i;

	count_words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count_words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count_words);
}

char	*find_words(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**rempli_tab(const char *s, char c, char **tab)
{
	int		place_word;
	int		start;
	int		i;

	start = 0;
	i = 0;
	place_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			tab[place_word] = find_words(s, start, i);
			if (!tab)
				return (libere_tab(tab, place_word), NULL);
			place_word++;
		}
		else
			i++;
	}
	tab[place_word] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof (char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = rempli_tab(s, c, tab);
	return (tab);
}
/*
int	main()
{
	char *str = " Ceci est une phrase";
	char **tab = ft_split(str, ' ');

	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	return(0);
}*/
