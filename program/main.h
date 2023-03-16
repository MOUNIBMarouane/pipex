/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killwa <killwa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:28:25 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/16 00:15:49 by killwa           ###   ########.fr       */
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
int	ft_checkargs(char *arg, char **env);
#endif 