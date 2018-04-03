/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 20:37:52 by yuxu              #+#    #+#             */
/*   Updated: 2018/04/03 12:47:45 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_partlen(const char *s, unsigned int i, char c)
{
	unsigned int a;

	a = i;
	if (s == NULL || i > (unsigned int)ft_strlen(s))
		return (0);
	while (s[a] != c)
		a++;
	return (a - i);
}
