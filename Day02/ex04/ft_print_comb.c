/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 17:09:58 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/08/27 23:26:34 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 47;
	while (a++ < 55)
	{
		b = a;
		while (b++ < 56)
		{
			c = b;
			while (c++ < 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
