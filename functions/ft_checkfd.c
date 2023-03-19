/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:33:28 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/19 10:32:59 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

int	ft_checkfd(char *infile)
{
	int	infd;

	infd = open(infile, O_RDWR);
	if (infd < 0)
		perror("error opening file");
	return (infd);
}
