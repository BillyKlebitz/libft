/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:30:43 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/02 23:21:02 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	cp_s1;
	unsigned char	cp_s2;

	while (n-- > 0)
	{
		cp_s1 = (unsigned char)*s1++;
		cp_s2 = (unsigned char)*s2++;
		if (cp_s1 != cp_s2 || cp_s1 == '\0')
			return (cp_s1 - cp_s2);
	}
	return (cp_s1 - cp_s2);
}
