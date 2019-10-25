/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 05:31:10 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/04 13:06:51 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;
	int	size;

	i = 0;
	z = 0;
	size = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[i])
	{
		while (to_find[z] == str[i + z])
		{
			if (z == size - 1)
				return (str + i);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
