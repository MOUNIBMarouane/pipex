/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:21:50 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/23 08:36:57 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

size_t	ft_strlen(const char *s)
{	
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
