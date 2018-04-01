/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 03:34:03 by yuxu              #+#    #+#             */
/*   Updated: 2018/04/01 04:18:01 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**this fonction gives the index number of which c occurs
**if c doesn't occur in the str, it returns -1 as indication.
*/

int		ft_index(char *str, char c)
{
	int index;

	if (str == NULL)
		return (0);
	index = 0;
	while (str[index] && str[index] != c)
		index++;
	if (index == (int)ft_strlen(str) && str[index] != c)
		index = -1;
	return (index);
}
