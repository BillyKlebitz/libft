/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzumaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:01:01 by suzumaki          #+#    #+#             */
/*   Updated: 2020/10/28 17:17:50 by suzumaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr);

int	ft_atoi(const char *nptr)
{
	int		res;
	char	*ptr;
	int		cnt;
	int		sign;

	ptr = (char*)nptr;
	res = 0;
	cnt = 0;
	sign = 1;
	while (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
			*ptr == '\v' || *ptr == '\f' || *ptr == '\r')
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign = -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		res = res * 10 + *ptr - '0';
		if (res != 0)
			cnt++;
		ptr++;
	}
	if (cnt > 19)
		return ((-1 * sign - 1) / 2);
	return (res * sign);
}
