/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:05:02 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/25 23:52:39 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_execmd1(char *arg, int fd, int pipfd, char **env)
{
	struct s_cmd	cmd;

	cmd.fulcmd = ft_split(arg, ' ');
	cmd.path = ft_getpath(cmd.fulcmd[0], env);
	if (fd == -1 || !cmd.path)
		exit(1);
	dup2(fd, 0);
	dup2(pipfd, 1);
	ft_closefd(pipfd, fd, -1, -1);
	execve(cmd.path, cmd.fulcmd, NULL);
	exit(1);
}

void	ft_execmd2(char *arg, int fd, int pipfd, char **env)
{
	struct s_cmd	cmd;

	cmd.fulcmd = ft_split(arg, ' ');
	cmd.path = ft_getpath(cmd.fulcmd[0], env);
	if (!cmd.path)
		exit(1);
	dup2(fd, 1);
	dup2(pipfd, 0);
	ft_closefd(fd, pipfd, -1, -1);
	execve(cmd.path, cmd.fulcmd, NULL);
	exit(1);
}

int	main(int argc, char **argv, char **environ)
{
	int				fd[2];
	int				pipfd[2];
	pid_t			pid[2];

	if (argc != 5)
		exit(1);
	fd[0] = ft_openfd(argv[1], 1);
	fd[1] = ft_openfd(argv[4], 2);
	if (pipe(pipfd) == -1)
		exit(1);
	pid[0] = fork();
	if (pid[0] == -1)
		exit (1);
	if (pid[0] == 0)
		ft_execmd1(argv[2], fd[0], pipfd[1], environ);
	close(pipfd[1]);
	pid[1] = fork();
	if (pid[1] == -1)
		exit(1);
	if (pid[1] == 0)
		ft_execmd2(argv[3], fd[1], pipfd[0], environ);
	ft_closefd(pipfd[0], fd[0], fd[1], -1);
	waitpid(pid[0], NULL, 0);
	waitpid(pid[1], NULL, 0);
	return (0);
}
