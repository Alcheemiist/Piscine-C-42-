/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 16:01:37 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/02 21:25:58 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	if (nb > 12 || nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		fact = 1;
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
	}
	return (fact);
}
