/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 11:07:00 by nabdelba          #+#    #+#             */
/*   Updated: 2019/04/13 11:07:26 by nabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		chr;
	const char	*d;

	chr = c;
	d = s;
	while (*s)
		s++;
	while (*s != chr && s != d)
		s--;
	return (*s == chr ? (char *)s : NULL);
}
