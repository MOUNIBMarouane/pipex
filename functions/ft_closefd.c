/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closefd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:43:51 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/24 09:17:41 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

void	ft_closefd(int fd, ...)
{
	va_list	args;
	int		i;

	i = fd;
	va_start(args, fd);
	while (i)
	{
		close(i);
		i = va_arg(args, int);
	}
	va_end(args);
}
