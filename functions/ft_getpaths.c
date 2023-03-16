/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getpaths.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:50:12 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/14 12:35:08 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

char	*ft_getpaths(char **env)
{
	char	**paths;

	paths = env;
	while (*paths)
	{
		if (!ft_memcmp(*paths, "PATH=",5))
			return (*paths);
		paths++;
	}
	return (NULL);
}
