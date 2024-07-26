/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:34:33 by memotyle          #+#    #+#             */
/*   Updated: 2024/07/25 19:10:36 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Itère sur la liste ’lst’ et applique la fonction
’f ’au contenu de chaque élément. Crée une nouvelle
liste résultant des applications successives de
’f’. La fonction ’del’ est là pour détruire le
contenu d’un élément si nécessaire
*/

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elmt;
	//int		len_lst;

	new_lst = NULL;//nlle liste retournee
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_elmt = malloc(sizeof (t_list));//place allouee pour nl elmts ou on va stocker elmt de lst
		if (!new_elmt)//si pas nl elmt dans la liste
		{
			ft_lstclear(&new_lst, del);//efface nl elmt
			return (NULL);//retourne null
		}
		new_elmt->content = f(lst->content);//on place dans nl elmt le contenu de lst en appliquant fonction
		new_elmt->next = NULL;//elmt next renvoi = null
		ft_lstadd_back(&new_lst, new_elmt);//on place le nl elmt a la fin de nlle liste
		lst = lst->next;//on passe a la suite pour appliquer la boucle a toute la liste
	}
	//free (new_elmt);
	return (new_lst);
}
/*#include <stdio.h>

void	del_node(void *node)
{
	free(node);
}

void	*upper(void *content)
{
	int	i;
	char	*str;
	char	*new_str;

	i = 0;
	str = (char *)content;
	new_str = ft_strdup(str);
	if (!new_str)
		return (NULL);
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
		i++;
	}
	return (new_str);
}
void	aff_list(t_list *lst)
{
	while (lst)
	{
		if (lst->content)
			printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*lst;
	t_list	*elem1 = ft_lstnew(ft_strdup("hello "));
	t_list	*elem2 = ft_lstnew(ft_strdup("bonjour "));
	t_list	*elem3 = ft_lstnew(ft_strdup("ola ? "));
	t_list	*elem4 = ft_lstnew(ft_strdup(" world "));
	t_list	*elem5 = ft_lstnew(ft_strdup("galaxy"));

	if (!elem1 || !elem2 || !elem3 || !elem4 || !elem5)
	{
		ft_lstclear(&lst, del_node);
		return (1);
	}

	lst = elem1;
	ft_lstadd_back(&lst, elem2);
	ft_lstadd_back(&lst, elem3);
	ft_lstadd_back(&lst, elem4);
	ft_lstadd_back(&lst, elem5);

	printf("Ma liste chainee avant ft_lstmap :\n");
	aff_list(lst);

	t_list	*new = ft_lstmap(elem1, upper, del_node);

	printf("\nMa nouvelle liste chainee apres ft_lstmap :\n");
	aff_list(new);

	ft_lstclear(&lst, del_node);
	ft_lstclear(&new, del_node);
	return (0);
}*/
