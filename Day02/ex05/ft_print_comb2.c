/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:07:09 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/08/27 20:49:47 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int left;
	int right;

	left = -1;
	while (left++ < 97)
	{
		right = left;
		while (right++ < 99)
		{
			ft_putchar((left / 10) + 48);
			ft_putchar((left % 10) + 48);
			ft_putchar(' ');
			ft_putchar((right / 10) + 48);
			ft_putchar((right % 10) + 48);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	ft_putchar('9');
	ft_putchar('8');
	ft_putchar(' ');
	ft_putchar('9');
	ft_putchar('9');
}
