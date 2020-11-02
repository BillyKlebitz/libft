/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:28:30 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/02 23:59:05 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
	int b;
	int len;
	int sign;
	char *res;

	sign = 0;
	len = 0;
	b = 1;
	printf("%d",len);
	if (n < 0)
		sign = -1;
	while(b < n)
	{	
		if(b > 999999999)
		{	
			b = 2147483647;
			if (b == n)
			{	
				len++;
				break;
			}
		}
		else
			b = b * 10;
		len++;
	}
	res = (char *)malloc(len * sizeof(char));
	if (sign == -1)
		res[0] = '-';
	while(len-- > 0)
	{	
		res[len] = (n % 10) + 48;
		n = n / 10;
	}
	return(res);
}
