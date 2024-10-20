/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozel <yozel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:47:32 by yozel             #+#    #+#             */
/*   Updated: 2024/10/20 12:08:49 by yozel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*new;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = malloc(s1_len + s2_len + 1);
	if (!new)
		return (new);
	i = 0;
	while (i < s1_len)
	{
		new[i] = s1[i];
		i++;
	}
	while (i < (s1_len + s2_len))
	{
		new[i] = s2[i - s1_len];
		i++;
	}
	new[i] = '\0';
	return (new);
}
