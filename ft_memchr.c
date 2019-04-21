/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 10:07:27 by nabdelba          #+#    #+#             */
/*   Updated: 2019/04/13 10:07:28 by nabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *src;
	unsigned char		chr;
	size_t				i;

	src = s;
	chr = c;
	i = -1;
	while (++i < n)
		if (src[i] == chr)
			return ((void *)src + i);
	return (NULL);
}
