/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:28:25 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/19 11:09:22 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include "../cloned/libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
char	*ft_getpaths(char **env);
char	*ft_executing(char *cmd, char **env);
int		ft_checkargs(char *arg, char **env);
int		ft_checkfd(char *infile);
#endif 