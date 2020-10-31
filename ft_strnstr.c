/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:54:21 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/31 19:50:03 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*cp_big;
	char	*cp_little;
	char	*res;
	size_t	n;

	n = len;
	cp_little = (char *)little;
	cp_big = (char *)big;
	if (*little == '\0')
		return (char *)big;
	while (*cp_big != '\0' && n)
	{
		if (*cp_big == *cp_little)
		{
			res = cp_big;
			while (*cp_big == *cp_little) //&& (n > 0) && (*cp_big !='\0'))
			{
				cp_big++;
				cp_little++;
				n--;
			}
			if (*cp_little == '\0')
				return (cp_big-1);
		}
		n--;
		cp_big++;
	}
	return NULL;
}
