/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:21:36 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/30 20:46:39 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*cpy_dst;
	const char	*s;
	size_t		n;

	s = src;
	cpy_dst = dst;
	n = size;
	if (n != 0)
	{
		while (*cpy_dst++ != '\0')
			;
		while (--n)
		{
			if ((*cpy_dst++ = *s++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*dst = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
