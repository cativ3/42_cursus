/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozel <yozel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:00:53 by yozel             #+#    #+#             */
/*   Updated: 2024/10/20 12:08:17 by yozel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	s1_size;

	s1_size = ft_strlen(s1) + 1;
	s2 = malloc(s1_size);
	if (s2)
		ft_strlcpy(s2, (char *)s1, s1_size);
	return (s2);
}
