/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:50:12 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/24 09:15:11 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

char	*ft_getenv(char **env)
{
	char	**paths;

	paths = env;
	if (paths == NULL)
		return (NULL);
	while (*paths)
	{
		if (!ft_memcmp(*paths, "PATH=", 5))
			return (*paths);
		paths++;
	}
	return (NULL);
}
