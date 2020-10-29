/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: default <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 05:32:12 by default           #+#    #+#             */
/*   Updated: 2020/10/26 05:50:46 by default          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memcpy(void *dest, const void *src, size_t n);


void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *cpy_dest;
	unsigned char *cpy_src;

	cpy_dest=(unsigned char *)dest;
	cpy_src=(unsigned char *)src;
	while(n--)
		*cpy_dest++=*cpy_src++;
	return(dest);
}
