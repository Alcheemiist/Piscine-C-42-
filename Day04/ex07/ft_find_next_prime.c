/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:46:32 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/04 17:10:45 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	  +
}

int		ft_find_next_prime(int nb)
{
	if (nb == 0 || nb == 1 || nb < 0)
		return (2);
	else
	{
		while (1)
		{
			if (ft_is_prime(nb) == 1)
				return (nb);
			nb++;
		}
	}
}
