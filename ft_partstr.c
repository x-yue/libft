/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partial.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:23:03 by yuxu              #+#    #+#             */
/*   Updated: 2018/04/03 12:49:32 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_partstr(char *str, unsigned int i, char c)
{
	int		a;
	char	*part;

	a = 0;
	if (str == NULL || i > (unsigned int)ft_strlen(str))
		return (NULL);
	if (!(part = (char*)malloc(sizeof(char) * ft_partlen(str, i, c) + 1)))
		return (NULL);
	if (str[i] == '\0')
		return ("");
	while (str[i] != c)
		part[a++] = str[i++];
	part[a] = 0;
	return (part);
}
