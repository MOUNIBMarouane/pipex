/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:33:28 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/25 10:44:34 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

int	ft_openfd(char *files, int options)
{
	int	fd;

	fd = -1;
	if (options == 1)
		fd = open(files, O_RDWR);
	else if (options == 2)
		fd = open(files, O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		perror("error opening file");
	return (fd);
}
