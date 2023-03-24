/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:58:56 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/23 10:07:07 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

void	*ft_memcpy(void *dist, const void *src, size_t n)
{
	size_t	i;

	if (dist == src)
		return (dist);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dist)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dist);
}
