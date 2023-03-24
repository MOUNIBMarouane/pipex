/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:28:25 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/24 08:22:19 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
size_t	ft_strlen(const char *s);
char	**ft_cmdargs(char *arg);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_getenv(char **env);
char	*ft_getpath(char *cmd, char **env);
char	*ft_strjoin(char const *s1, char const *s2);
void    ft_perror(char *message);
void	ft_closefd(int fd, ...);
int		ft_checkenv(char *arg, char **env);
int		ft_openfd(char *files, int options);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dist, const void *src, size_t n);
char *ft_strchr(const char *s, int c);
struct cmd
{
	char    **fulcmd;
	char    *cmd;
	char    *path;
};

#endif