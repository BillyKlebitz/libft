/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:09:46 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/30 20:47:03 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char			*cpy_dst;
	const char		*s;
	size_t			n;

	s = src;
	cpy_dst = dst;
	n = dstsize;
	if (n != 0)
	{
		while (--n)
		{
			if ((*cpy_dst++ = *s++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
