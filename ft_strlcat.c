/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:47:48 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/25 18:07:51 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int i;

	if (size >= ft_strlen(dest))
		i = ft_strlen(dest);
	if (size < ft_strlen(dest))
		i = size;
	if (size == 0)
		return (ft_strlen(src));
	if (size > 0 && size <= ft_strlen(dest) + 2)
		return (i + ft_strlen(src));
	return (0);
}
