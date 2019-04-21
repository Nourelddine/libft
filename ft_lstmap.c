/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 18:09:54 by nabdelba          #+#    #+#             */
/*   Updated: 2019/04/20 23:56:25 by nabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	if (lst)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!(new = f(lst)))
			return (NULL);
		new->next = ft_lstmap(lst->next, f);
		return (new);
	}
	return (NULL);
}
