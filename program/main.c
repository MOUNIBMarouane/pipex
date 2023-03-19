/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:05:02 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/19 11:22:22 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv, char **environ)
{
	char	*executing;
	char	**cmd_flag;
	int	i;
	int	check;
	int	fdp[2];

	if (argc != 5)
		return (0);
	puts("test");
	if (ft_checkfd(argv[1]) == -1)
		return (0);
	executing = NULL;
	check = ft_checkargs(argv[1], environ);
	if (check == 1)
	{
		cmd_flag= ft_split(argv[1], ' ');
		executing = ft_executing(cmd_flag[0], environ);
		printf("cmd :%s", executing);
	}
	else if (check == 2)
	{
		executing = ft_executing(argv[i], environ);
		printf("cmd : %s \n", executing);
	}
	// while (i < argc)
	// {
	// 	executing = NULL;
	// 	check = ft_checkargs(argv[i], environ);
	// 	if (check == 1)
	// 	{
	// 		cmd_flag= ft_split(argv[i], ' ');
	// 		executing = ft_executing(cmd_flag[0], environ);
	// 		printf("cmd :%s", executing);
	// 	}
	// 	else if (check == 2)
	// 	{
	// 		executing = ft_executing(argv[i], environ);
	// 		printf("cmd : %s \n", executing);
	// 	}
	// 	i++;
	// 	i = fork();
	// 	if (i == 0)
	// 	{
	// 		close(1);
	// 		int fd = open("file.txt", O_RDWR);
	// 		dup2(1, fd);
	// 		execve(executing, ft_split(argv[1], ' '), NULL);
	// 	}
	// 	else
	// 		printf("main");
	// }
	return (0);
}
