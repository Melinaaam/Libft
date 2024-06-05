/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:07:18 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/05 09:31:03 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

// Fonction pour libérer un contenu (par exemple un entier)
void del(void *content) {
    free(content);
}

// Fonction pour ajouter un nœud à la liste chaînée
t_list *lstnew(void *content) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node == NULL) return NULL;
    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}

// Fonction pour ajouter un nœud au début de la liste
void lstadd_front(t_list **lst, t_list *new_node) {
    if (new_node != NULL) {
        new_node->next = *lst;
        *lst = new_node;
    }
}

// Fonction pour imprimer la liste chaînée (supposons que le contenu est un int)
void print_list(t_list *lst) {
    while (lst != NULL) {
        printf("%d -> ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

// Fonction principale
int main() {
    t_list *head = NULL;

    // Ajouter des éléments à la liste
    for (int i = 0; i < 5; i++) {
        int *num = (int *)malloc(sizeof(int));
        if (num == NULL) return 1; // Gestion d'erreur simplifiée
        *num = i;
        t_list *new_node = lstnew(num);
        lstadd_front(&head, new_node);
    }

    // Afficher la liste chaînée
    printf("Liste chaînée : ");
    print_list(head);

    // Supprimer le premier nœud de la liste
    if (head != NULL) {
        t_list *node_to_delete = head;
        head = head->next;
        ft_lstdelone(node_to_delete, del);
    }

    // Afficher la liste chaînée après suppression
    printf("Liste chaînée après suppression du premier nœud : ");
    print_list(head);

    // Libérer le reste de la liste
    while (head != NULL) {
        t_list *next = head->next;
        ft_lstdelone(head, del);
        head = next;
    }

    return 0;
}
*/
