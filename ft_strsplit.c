/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 04:53:03 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/03 05:36:37 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_count(char *s, char c)
{
	int i;
	int nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			return (nb_words);
		nb_words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nb_words);
}

int		malloc_strings(char **tab, char *s, char c, int *k)
{
	int a;
	int b;

	a = k[0];
	b = 0;
	while (s[k[0]] == c && s[k[0]])
		k[0]++;
	if (!(tab[k[1]] = (char*)malloc(sizeof(char) * (k[0] - a) + 1)))
		return (0);
	while (a <= k[0])
	{
		tab[k[1]][b] = s[a];
		a++;
		b++;
	}
	tab[k[1]][b - 1] = 0;
	return (k[0]);
}

char	**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**fresh;
	int		nb_words;
	int		k[2];

	k[0] = 0;
	k[1] = 0;
	str = (char*)s;
	nb_words = word_count(str, c);
	if (!(fresh = (char**)malloc(sizeof(char*) * nb_words + 1)))
		return (NULL);
	while (nb_words > 0)
	{
		while (str[k[0]] != c)
			k[0]++;
		k[0] = malloc_strings(fresh, str, c, k);
		nb_words--;
		k[1]++;
	}
	fresh[k[1]] = 0;
	return (fresh);
}
