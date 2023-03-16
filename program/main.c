/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:05:02 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/16 17:07:13 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv, char **environ)
{
	char	*executing;
	char	**cmd_flag;
	int	i;
	int check;

	i = 1;
	printf("%d\n", argc);
	while (i < argc)
	{
		executing = NULL;
		check = ft_checkargs(argv[i], environ);
		// printf("%d \n", check);
		if (check == 1)
		{
			// puts("split the arg and get the first then exute with flag");
			cmd_flag= ft_split(argv[i], ' ');
			executing = ft_executing(cmd_flag[0], environ);
			printf("cmd :%s", executing);
		}
		else if (check == 2)
		{
			executing = ft_executing(argv[i], environ);
			printf("cmd : %s \n", executing);
		} 
		i++;
		fork();
		execve(executing,ft_split("ls -a a.out", ' '),NULL);
	}
	// execve("/bin/ls",ft_split("ls -a a.out", ' '),NULL);
	return 0;
}
