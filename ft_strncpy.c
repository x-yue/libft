/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 20:38:25 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/02 20:42:40 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (i < (int)len && src[i])
	{
		dst[i] = (char)src[i];
		i++;
	}
	if (i < (int)len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
