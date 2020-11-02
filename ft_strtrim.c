/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:06:47 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/02 23:22:37 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *set_ptr;
	char *s_ptr;
	char *ptr_res;
	char *res;

	res = malloc(sizeof(char) * (1 + ft_strlen(s1)));
	s_ptr = (char *)s1;
	ptr_res = res;
	while (*s_ptr++ != '\0')
	{
		set_ptr = (char *)set;
		while (*set_ptr != ('\0' || *s_ptr))
		{
			if (*set_ptr == *s_ptr)
				s_ptr++;
		}
		*res++ = *s_ptr;
	}
	*res = '\0';
	return (ptr_res);
}
