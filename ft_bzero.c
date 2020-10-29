/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <suzumaki@student.21-school.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 04:51:34 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/26 05:25:30 by default          ###   ########.fr       */
/*                                                                            */
i/* ************************************************************************** */

void bzero(void * s, size_t n);

void bzero(void * s, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while(n--)
		*ptr++='\0';
	return (s);
}
