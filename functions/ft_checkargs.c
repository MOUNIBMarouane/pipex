/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:11:35 by killwa            #+#    #+#             */
/*   Updated: 2023/03/19 11:43:54 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"

int	ft_cmdargs(char *arg, char **env)
{
	char	**fullcmd;

	if (ft_memchr(arg, ' ', ft_strlen(arg)))
	{
		fullcmd = ft_split(arg, ' ');
		if (ft_executing(*fullcmd, env) != NULL)
			return (1);
	}
	else
	{
		if (ft_executing(arg, env) != NULL)
			return (2);
	}
	return (0);
}
