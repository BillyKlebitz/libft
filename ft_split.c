/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:14:50 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/04 00:05:20 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t strwrd(char const *s, char c);

static size_t strwrd(char const *s, char c)
{
	size_t n;
	size_t z;

	n = 0;
	z = 0;
	while(s[n] != '\0')
    {
		if (s[n] == c)
        {
            while(s[n] == c)
                n++;
        }
        if (s[n] != c)
        {
			while(s[n] != c)	
			{	
				n++;
				z++;
			}
		}
    }
	return (z);
}

char **ft_split(char const *s, char c)
{
	char *ptr;
	char **res;
	char *str;
	int n;
	int z;

	n = 0;
	z = 0;
	ptr = (char *)s;
	res = malloc(sizeof(char *) * (strwrd(s,c) + 1));
	res[strwrd(s,c)] = "\0";
	while (*ptr != '\0')
	{
		n = 0;
		while (*ptr == c && *ptr != '\0')
			ptr++;
		if(*ptr == '\0')
			break;
		while (ptr[n] != c  && ptr[n] != '\0')
			n++;
		str = malloc(sizeof(char) *(n+1));
		str[n] = '\0';
		n = 0;
		while(*ptr != c && *ptr != '\0')
		{
			str[n] = *ptr++;
			n++;	
		}
		//str[n] = '\0';
		res[z] = ft_strdup(str);
		free(str);
		z++;
		if(*ptr != '\0')// && *ptr != '\0')
			ptr++;
	}
	return res;
}
