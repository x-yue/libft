/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 22:45:13 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/02 23:09:13 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*result;
	int		i;

	str = (char*)s;
	i = 0;
	if (!(result = (char*)malloc(sizeof(str) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i])
	{
		result[i] = (*f)(str[i]);
		i++;
	}
	return (result);
}
