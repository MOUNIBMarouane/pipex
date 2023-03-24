/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:47:20 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/23 12:37:02 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

char	*ft_strchr(const char	*s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (char )c)
		str++;
	if (*str == (char )c)
		return (str);
	return (NULL);
}
