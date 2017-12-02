/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 05:18:41 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/02 05:26:50 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero*void *s, size_t n);

void	*ft_memalloc(size_t size)
{
	void *s;

	if (!(s = (void)malloc(sizeof(void) * (size + 1))))
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
