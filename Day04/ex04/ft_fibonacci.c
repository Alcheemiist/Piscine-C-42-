/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 09:33:47 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/01 09:53:46 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int element;

	if (index < 0)
	{
		element = -1;
		return (element);
	}
	if (index == 0)
	{
		element = 0;
		return (element);
	}
	if (index == 1 || index == 2)
	{
		element = 1;
		return (element);
	}
	if (index == 3)
	{
		element = 2;
		return (element);
	}
	element = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (element);
}
