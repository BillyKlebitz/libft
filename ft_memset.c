/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:39:43 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/29 18:40:17 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char sym;

	ptr = (unsigned char *)s;
	sym = (unsigned char)c;
	while (n--)
		*ptr++ = sym;
	return (s);
}
