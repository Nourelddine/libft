/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 09:54:14 by nabdelba          #+#    #+#             */
/*   Updated: 2019/04/20 22:01:06 by nabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst,
							const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned const char *s;
	unsigned char		chr;

	chr = c;
	d = dst;
	s = src;
	while (n--)
	{
		*d++ = *s;
		if (*s++ == chr)
			return (d);
	}
	return (NULL);
}
