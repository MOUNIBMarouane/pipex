/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_executing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killwa <killwa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:57:12 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/15 22:44:32 by killwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

char	*ft_executing(char *cmd, char **env)
{
	char	**paths;
	char	*path;

	path = ft_getpaths(env);
	paths = NULL;
	if(path != NULL)
		paths = ft_split(path + 4, ':');
	while(*paths)
	{
		path = NULL;
		path = ft_strjoin(*paths,"/");
		path = ft_strjoin(path,cmd);
		if(!access(path,X_OK))
			return(path);
		paths++;
	}
	return (NULL);
}
