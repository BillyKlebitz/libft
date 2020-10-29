/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <suzumaki@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 02:53:48 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/26 05:18:34 by default          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *s, int c, size_t n);


void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char sym;
	
	ptr = (unsigned char *)s;
	sym = (unsigned char)c;
	while(n--)
		*ptr++ = sym;
	return(s);
}
