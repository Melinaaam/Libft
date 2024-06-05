/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:23:27 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:34:37 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	upper(void *content)
{
	int	i;
	char	*str;

	i = 0;
	str = (char *)content;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

void	aff_list(t_list *lst)
{
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*elem1 = malloc(sizeof(t_list));
	t_list	*elem2 = malloc(sizeof(t_list));
	t_list	*elem3 = malloc(sizeof(t_list));
	t_list	*elem4 = malloc(sizeof(t_list));
	t_list	*elem5 = malloc(sizeof(t_list));

	if (!elem1 || !elem2 || !elem3 || !elem4 || !elem5)
	{
		if (elem1) free(elem1);
		if (elem2) free(elem2);
		if (elem3) free(elem3);
		if (elem4) free(elem4);
		if (elem5) free(elem5);
		return (1);
	}

	lst = elem1;
	elem1->content = ft_strdup("Hola ");
	elem1->next = elem2;
	elem2->content = ft_strdup("que ");
	elem2->next = elem3;
	elem3->content = ft_strdup("tal ?");
	elem3->next = elem4;
	elem4->content = ft_strdup("Muy bien ! ");
	elem4->next = elem5;
	elem5->content = ft_strdup("Y tu ?");
	elem5->next = NULL;

	printf("Ma liste chainee avant ft_lstiter :\n");
	aff_list(lst);

	ft_lstiter(elem4, upper);

	printf("\nMa liste chainee apres ft_lstiter :\n");
	aff_list(lst);

	//ft_lstclear(&lst, free);
	return (0);
}*/
