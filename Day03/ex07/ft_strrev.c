/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 21:14:58 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/08/28 22:57:00 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}
	return (y);
}

void	*ft_strrev(char *str)
{
	int		c;
	int		i;
	char	rev;

	i = 1;
	c = ft_strlen(str);
	while (i < c)
	{
		rev = str[i - 1];
		str[i - 1] = str[c - 1];
		str[c - 1] = rev;
		i++;
		c--;
	}
	return (str);
}
