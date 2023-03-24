/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:04:25 by mamounib          #+#    #+#             */
/*   Updated: 2023/03/23 08:36:57 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../program/main.h"

static int	ft_lentp(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_nword(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static char	**ft_free(char **spliter, int i)
{
	while (i >= 0)
	{
		free(spliter[i]);
		i--;
	}
	free(spliter);
	spliter = NULL;
	return (spliter);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**spliter;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	spliter = (char **)malloc((ft_nword(s, c) + 1) * sizeof(char *));
	if (!spliter)
		return (0);
	i = -1;
	j = 0;
	while (++i < ft_nword(s, c))
	{
		while (s[j] == c)
			j++;
		len = ft_lentp(s + j, c);
		spliter[i] = ft_substr(s, j, len);
		if (!spliter[i])
			return (ft_free(spliter, i));
		j += len;
	}
	spliter[i] = NULL;
	return (spliter);
}
