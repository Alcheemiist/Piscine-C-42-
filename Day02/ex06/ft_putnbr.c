/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 01:08:19 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/08/28 03:20:53 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		n = -1 * n;
		ft_putchar('-');
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}
