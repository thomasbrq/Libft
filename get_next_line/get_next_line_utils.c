/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:18:17 by tbraquem          #+#    #+#             */
/*   Updated: 2022/05/30 11:41:18 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (!res)
		return (NULL);
	if (s1)
	{
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
	}
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	free(s1);
	return (res);
}

int	ft_strchr_gnl(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (1);
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

size_t	ft_strlen_gnl(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
