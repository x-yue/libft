/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 13:01:14 by yuxu              #+#    #+#             */
/*   Updated: 2018/04/03 14:09:10 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this function returns the str removing a part at the beginning of it
*/

char	*ft_strmove(char *str, size_t len)
{
	char	*res;
	int		i;

	if (!(res = (char*)malloc(sizeof(char) * (ft_strlen(str) - len) + 1))
			|| !str || len > ft_strlen(str))
		return (NULL);
	i = 0;
	while (str[len])
		res[i++] = str[len++];
	res[i] = 0;
	return (res);
}
