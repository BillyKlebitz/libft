/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:28:30 by suzumaki          #+#    #+#             */
/*   Updated: 2020/11/05 22:50:31 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		sign;

	sign = n >= 0 ? 0 : 1;
	n = n >= 0 ? n : n * -1;
	if (n == -2147483648)
	{
		if (!(res = (char *)malloc(sizeof(char) * 12)))
			return (NULL);
		return (res = ft_memcpy(res, "-2147483648", 11));
	}
	len = ft_nlen(n) + sign;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[0] = sign == 0 ? '\0' : '-';
	res[0] = n == 0 ? '0' : res[0];
	res[len--] = '\0';
	while (n)
	{
		res[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (res);
}
