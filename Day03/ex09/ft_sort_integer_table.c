/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 05:15:50 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/03 03:03:46 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int rev;
	int y;

	y = 0;
	while (y < size)
	{
		if (tab[y] > tab[y + 1])
		{
			rev = tab[y + 1];
			tab[y + 1] = tab[y];
			tab[y] = rev;
			y = 0;
		}
		else
			y++;
	}
}
