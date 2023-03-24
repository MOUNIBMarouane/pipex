/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:23:41 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/23 10:05:48 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*p;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(i);
	if (!p)
		return (0);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy(p + (ft_strlen(s1)), s2, ft_strlen(s2));
	p[i - 1] = '\0';
	free ((void *)s1);
	return (p);
}
