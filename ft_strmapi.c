/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 23:09:48 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/02 23:27:24 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	char	*result;

	i = 0;
	str = (char*)s;
	if (!(result = (char*)malloc(sizeof(char*) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i])
	{
		result[i] = (*f)(i, str[i]);
		i++;
	}
	return (result);
}
