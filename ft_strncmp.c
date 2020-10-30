/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:30:43 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/30 18:30:45 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*cp_s1;
	char	*cp_s2;
	int		len;

	len = n;
	cp_s1 = (char *)s1;
	cp_s2 = (char *)s2;
	while (len--)
	{
		if (*cp_s1 != *cp_s2)
			return (*cp_s1 - *cp_s2);
	}
	return (*cp_s1 - *cp_s2);
}
