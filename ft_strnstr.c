/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:54:21 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/30 18:12:47 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*cp_big;
	char	*cp_little;
	char	*res;
	int		n;

	n = len;
	res = NULL;
	cp_big = (char *)big;
	cp_little = (char *)little;
	while (*cp_big != '\0' && n--)
	{
		if (*cp_big == *cp_little)
		{
			res = cp_big;
			while (*cp_big++ == *cp_little++)
				;
			if (*cp_little == '\0')
				return (res);
		}
		cp_big++;
	}
	return (res);
}
