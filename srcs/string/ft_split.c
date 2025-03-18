/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:07:59 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 11:12:10 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char **libere_tab(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

int count_words(const char *str)
{
	int	count = 0;
	int	i = 0;

	while(str[i] != '\0')
	{
		if (!is_delimiter(str[i]))
		{
			count++;
			while(str[i] && !is_delimiter(str[i]))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char *extract_words(const char *str, int start, int end)
{
	char *word;
	int i = 0;

	word = malloc(sizeof(char) * (end - start + 1));
	if(!word)
		return (NULL);

	while(start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}


char	**ft_split(char *str)
{
	char **tab;
	int	start = 0;
	int i = 0;
	int word_count = 0;
	int tab_index = 0;

	word_count = count_words(str);

	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);

	while(str[i] != '\0')
	{
		if(!is_delimiter(str[i]))
		{
			start = i;
			while(str[i] && !is_delimiter(str[i]))
				i++;
			tab[tab_index] = extract_words(str, start, i);
			if (!tab[tab_index])
			{
				while(tab_index > 0)
					free(tab[--tab_index]);
				free(tab);
				return (NULL);
			}
			tab_index++;
		}
		else
			i++;
	}
	tab [tab_index] = NULL;
	return (tab);
}
