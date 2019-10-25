/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 12:41:12 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/07 07:25:17 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int upper;

	i = 0;
	upper = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}
