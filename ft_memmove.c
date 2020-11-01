/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:03:15 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/01 20:18:02 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;
	size_t			len;
	unsigned char	*lst_dest;
	unsigned char	*lst_src;

	if (dest == NULL && src == NULL)
		return (dest);
	len = n;
	cpy_dest = (unsigned char *)dest;
	cpy_src = (unsigned char *)src;
	if (cpy_dest < cpy_src)
		while (len--)
			*cpy_dest++ = *cpy_src++;
	else
	{
		lst_dest = cpy_dest + (len - 1);
		lst_src = cpy_src + (len - 1);
		while (len--)
			*lst_dest-- = *lst_src--;
	}
	return (dest);
}
