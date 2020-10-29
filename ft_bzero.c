/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:42:13 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/29 18:42:23 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	bzero(void *s, size_t n);

void	bzero(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr += '\0';
	return (s);
}
