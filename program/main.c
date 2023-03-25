/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killwa <killwa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:05:02 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/24 22:33:02 by killwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv, char **environ)
{
	struct	cmd cmd[2];
	char	*file_name[2];
	int		fd[2];
	int		pfd[2];
	pid_t		pid[2];
    
	if(argc != 5)
		exit(1);
	
    file_name[0]= argv[1];
	file_name[1]= argv[4];
	fd[0] = ft_openfd(file_name[0], 1);
	fd[1] = ft_openfd(file_name[1], 2);
	if(pipe(pfd) == -1)
		exit(1);
	pid[0] = fork(); //
	if(pid[0] == 0)
	{
		cmd[0].fulcmd = ft_split(argv[2], ' ');
		cmd[0].path = ft_getpath(cmd[0].fulcmd[0], environ);
		if (fd[0] == -1 || !cmd[0].path)
			exit(1);
		close(pfd[0]);
		dup2(fd[0],0);
		dup2(pfd[1], 1);
		close (pfd[1]);
		close(fd[0]);
        execve(cmd[0].path, cmd[0].fulcmd, NULL);
		exit(1);
	}
	close(pfd[1]);
	pid[1] = fork();
	if (pid[1] == 0)
	{
		cmd[1].fulcmd = ft_split(argv[3], ' ');
		cmd[1].path = ft_getpath(cmd[1].fulcmd[0], environ);
		if (!cmd[1].path)
		    exit(1);
		dup2(fd[1], 1);
		dup2(pfd[0], 0);
		close(fd[1]);
		close(pfd[0]);
		execve(cmd[1].path, cmd[1].fulcmd, NULL);
		exit(1);
	}
	close(pfd[0]);
	close(fd[0]);
	close(fd[1]);
	waitpid( pid[0], NULL, 0);
	waitpid( pid[1], NULL, 0);
	return (0);
}
