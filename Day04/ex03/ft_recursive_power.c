/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 09:03:55 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/03 03:51:51 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || power >= 30)
		return (0);
	if (power == 0 || power < 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
