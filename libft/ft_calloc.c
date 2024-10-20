/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozel <yozel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:19:05 by yozel             #+#    #+#             */
/*   Updated: 2024/10/20 12:08:02 by yozel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;
	size_t	s;

	s = count * size;
	b = malloc(s);
	if (b)
		ft_bzero(b, s);
	return (b);
}
