/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:30:19 by smunio            #+#    #+#             */
/*   Updated: 2022/11/26 02:40:29 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*buff;
	t_list	*cont;

	if (!lst || !f)
		return (0);
	cont = 0;
	while (lst)
	{
		buff = f(lst->content);
		new = ft_lstnew(buff);
		if (!new)
		{
			free(buff);
			ft_lstclear(&cont, del);
			return (0);
		}
		ft_lstadd_back(&cont, new);
		lst = lst->next;
	}
	return (cont);
}
