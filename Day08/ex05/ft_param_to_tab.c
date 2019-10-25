/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:48:47 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/12 11:48:52 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		size;
	char	*duping;
	int		i;

	i = 0;
	size = ft_strlen(src);
	duping = (char*)malloc(sizeof(char) * (size + 1));
	while (src[i] != '\0')
	{
		duping[i] = src[i];
		i++;
	}
	duping[i] = src[i];
	return (duping);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*dup;
	int				i;
	int				j;

	dup = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (dup == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		dup[i].size_param = j;
		dup[i].str = av[i];
		dup[i].copy = ft_strdup(av[i]);
		dup[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	dup[i].str = 0;
	return (dup);
}
