/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:44:54 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/08/29 18:38:13 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11 && hour >= 1)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, (hour + 1));
	if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.");
	if (hour == 12)
		printf("12.00 P.M. AND 13.00 P.M.");
	if (hour >= 13 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, (hour - 11));
	if (hour == 00 && hour == 0 && hour == 24)
		printf("12.00 A.M. AND 01.00 A.M.\n");
	if (hour == 23)
		printrf("11.00 P.M. AND 12.00 P.M.");
}
