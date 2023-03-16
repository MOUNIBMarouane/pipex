/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killwa <killwa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:11:35 by killwa            #+#    #+#             */
/*   Updated: 2023/03/16 12:15:29 by killwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../program/main.h"
int	ft_checkargs(char *arg, char **env)
{
	if(ft_memchr(arg, ' ',ft_strlen(arg)))
	{
		/*
		*split by spaces and chack first string
		*if is valid return 0
		*else return 1
		*/
		char **fullcmd;
		fullcmd = ft_split(arg,' ');
		if (ft_executing(*fullcmd,env) != NULL)
			return 1;
	}
	else
	{
		/*
		 *chek arg if is a cmd
		 *if is valid return 0
		 *else return 2
		*/
		if (ft_executing(arg, env) != NULL)
			return 2;
	}
	return 0;
}
