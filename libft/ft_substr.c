/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozel <yozel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:42:25 by yozel             #+#    #+#             */
/*   Updated: 2024/10/20 12:09:37 by yozel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	s_len;
	size_t	end;
	size_t	i;

	s_len = ft_strlen(s);
	if (!*s || s_len < start)
		return (ft_calloc(1, sizeof(char)));
	if (len > s_len)
		end = s_len - start;
	else
		end = len;
	dst = malloc(sizeof(char) * (end + 1));
	if (!dst)
		return (0);
	i = 0;
	while (i < end)
	{
		dst[i] = s[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
