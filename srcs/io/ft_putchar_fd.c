/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:23:11 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/04 14:28:06 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
fd = ecrire ailleurs que dans le terminal (!= 1)
*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;

	fd = open("testputchar.txt", O_TRUNC | O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('c', fd);
	close (fd);

	return (0);
}
*/
