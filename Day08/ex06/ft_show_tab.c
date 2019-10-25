/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:49:52 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/12 11:49:56 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	ft_print_words_tables(char **tab)
{
	int	j;
	int	i;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			++j;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str)
	{
		j = 0;
		while (par[i].copy[j])
		{
			ft_putchar(par[i].copy[j]);
			++j;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		++i;
	}
}
