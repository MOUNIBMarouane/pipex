/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killwa <killwa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:05:02 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/16 12:16:30 by killwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv, char **environ)
{
	char *executing;
	char *flags;
	char **cmd_flag;
	int i = 1;
	int check;
	printf("%d\n", argc);
	while (i < argc )
	{
		executing = NULL;
		check = ft_checkargs(argv[i], environ);
		// printf("%d \n", check);
		if (check == 1)
		{
			// puts("split the arg and get the first then exute with flag");
			cmd_flag= ft_split(argv[i], ' ');
			executing = ft_executing(cmd_flag[0], environ);
			flags= cmd_flag[1];
			printf("cmd :%s flag: %s\n", executing, flags);
		}
		else if (check == 2)
		{
			executing = ft_executing(argv[i], environ);
			printf("cmd : %s \n", executing);
		} 
		i++;
	}
	
	return 0;
}