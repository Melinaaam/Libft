/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:48:11 by memotyle          #+#    #+#             */
/*   Updated: 2025/03/18 10:40:51 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Libère la mémoire associée au pointeur 'storage'
** et remet ce dernier à NULL pour éviter toute fuite de mémoire.
*/
static char	*free_storage(char **storage)
{
	if (*storage)
	{
		free(*storage);
		*storage = NULL;
	}
	return (NULL);
}

/*
** Concatène le contenu déjà présent dans 'storage'
** avec celui du 'buffer', puis met à jour 'storage' en libérant
** l'ancien contenu.
*/
static void	append_to_storage(char **storage, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(*storage, buffer);
	free_storage(storage);
	*storage = temp;
}

/*
** Récupère la première ligne (jusqu'au caractère '\n')
** à partir de 'storage' et renvoie cette ligne. Elle met également
** à jour le contenu de 'storage' en supprimant la partie extraite.
*/
static char	*extract_line(char **storage)
{
	size_t	length;
	char	*line;
	char	*temp;

	if (ft_strchr(*storage, '\n'))
		length = ft_strchr(*storage, '\n') - *storage + 1;
	else
		length = ft_strlen(*storage);
	line = malloc((length + 1) * sizeof(char));
	if (!line)
		return (NULL);
	ft_strlcpy(line, *storage, length + 1);
	if (ft_strchr(*storage, '\n'))
	{
		temp = ft_strjoin(ft_strchr(*storage, '\n') + 1, "");
		free_storage(storage);
		*storage = temp;
	}
	else
		free_storage(storage);
	return (line);
}

/*
** Cette fonction lit une ligne à partir du descripteur de fichier 'fd'
** en utilisant un tampon de taille BUFFER_SIZE. Les données sont stockées
** dans 'storage' afin de pouvoir reconstruire la ligne sur plusieurs
** appels si nécessaire.
*/
char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*storage = NULL;
	ssize_t		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX - 1)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (!storage)
			storage = ft_strjoin("", buffer);
		else
			append_to_storage(&storage, buffer);
		if (ft_strchr(storage, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (bytes_read == -1 || !storage || !*storage)
		return (free_storage(&storage));
	return (extract_line(&storage));
}
