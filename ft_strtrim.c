/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:06:47 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/03 23:00:04 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int isset(char s1, char const *set);

static size_t len(char const *s1, char const *set);

static size_t len(char const *s1, char const *set)
{
	char *pt_s1;
	char *pt_set;
	static size_t n;
	int e;

	e = 0;
	n = ft_strlen(s1);
	pt_s1 = (char *)s1;
	while (isset(*pt_s1,set) && *pt_s1 != '\0')
	{	
		n--;
		pt_s1++;
	}
	while (pt_s1[e] != '\0')
		e++;
	e = e - 1;
	while (isset(pt_s1[e],set) && n)
	{
		e = e - 1;
		n = n -1;
	}		
	return (n);
}

static int isset(char s1, char const *set)
{
	char *pt_set;

	pt_set = (char *)set;
	while(*pt_set != '\0')
	{
		if (s1 == *pt_set)
			return (1);
		pt_set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *set_ptr;
	char *pt_s1;
	char *ptr_res;
	char *res;
	int z;

	z = len(s1,set);
	if(!(res = malloc(sizeof(char) * (1 + z))))
		return (NULL);
	res[z] = '\0';
	pt_s1 = (char *)s1;
	ptr_res = res;
	while (isset(*pt_s1,set) && pt_s1 !='\0')
            pt_s1++;
	while (*pt_s1 != '\0' && res && z > 0)
	{
		*res++ = *pt_s1++;
		z--;
	}
	return (ptr_res);
}
