/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:15:18 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/05 16:19:38 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	wrdcnt(char const *s, char c)
{
	size_t n;

	n = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			n++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (n);
}

static char		*word(char const *s, char c)
{
	int		wrdlen;
	char	*wrd;

	if (ft_strrchr(s, c) == NULL)
		wrdlen = ft_strlen(s) + 1;
	else
		wrdlen = ft_strchr(s, c) - s + 1;
	if (!(wrd = malloc(sizeof(char) * (wrdlen + 1))))
		return (NULL);
	ft_strlcpy(wrd, s, wrdlen);
	wrd[wrdlen] = '\0';
	return (wrd);
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		wct;
	int		i;

	i = 0;
	if (!s || !c)
		return (NULL);
	wct = wrdcnt(s, c);
	if (!(res = malloc(sizeof(char *) * (wct + 1))))
		return (NULL);
	while (i < wct)
	{
		while (*s == c)
			s++;
		res[i] = word(s, c);
		s += ft_strlen(res[i]);
		i++;
	}
	res[i] = NULL;
	return (res);
}
