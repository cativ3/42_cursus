/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozel <yozel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:22:35 by yozel             #+#    #+#             */
/*   Updated: 2024/10/17 17:23:48 by yozel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += (str[i] - 48);
		i++;
	}
	return (res * sign);
}
