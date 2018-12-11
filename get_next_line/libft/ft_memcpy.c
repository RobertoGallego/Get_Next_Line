/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groberto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:07:51 by groberto          #+#    #+#             */
/*   Updated: 2018/12/03 11:44:56 by groberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "./includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*dst;
	const char	*srcs;

	i = 0;
	dst = (char *)dest;
	srcs = (char *)src;
	while (i < len)
	{
		dst[i] = srcs[i];
		i++;
	}
	return (dst);
}
