/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 06:41:09 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/01 09:18:26 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	res = 1;
	if (power < 0 || power >= 30)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
