/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:54:21 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/01 20:20:58 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*cp_big;
	const char	*cp_little;
	size_t		n;
	const char	*res;

	cp_big = big;
	cp_little = little;
	n = len;
	while (1)
	{
		res = (*cp_big == *cp_little || *cp_little == '\0') ? cp_big : NULL;
		while (*++cp_big == *++cp_little && --n != 0 && *cp_little != '\0')
			;
		cp_little = (*cp_little != '\0') ? little : "\0";
		if (*cp_little == '\0')
			return ((char *)res);
		if (*cp_big == '\0' || n == 0)
			return (NULL);
		n--;
		cp_big++;
	}
}
