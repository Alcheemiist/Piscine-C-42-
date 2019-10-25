/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaazmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 00:06:55 by eelaazmi          #+#    #+#             */
/*   Updated: 2019/09/13 00:07:00 by eelaazmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>

typedef int		t_bool;

void			ft_putstr(char *str);

t_bool			ft_is_even(int nbr);

# ifndef TRUE

#  define TRUE 1

# endif

# ifndef FALSE

#  define FALSE 0

# endif

# ifndef EVEN

#  define EVEN(nbr) (nbr % 2 == 0) ? TRUE : FALSE

# endif

# ifndef EVEN_MSG

#  define EVEN_MSG "I have an even number of arguments.\n"

# endif

# ifndef ODD_MSG

#  define ODD_MSG "I have an odd number of arguments.\n"

# endif

# ifndef SUCCESS

#  define SUCCESS 0

# endif

#endif
