/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:41:17 by smunio            #+#    #+#             */
/*   Updated: 2022/11/26 03:08:24 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nb_elements;

	nb_elements = 1;
	if (!lst)
		return (0);
	while (lst->next != 0)
	{
		nb_elements++;
		lst = lst->next;
	}
	return (nb_elements);
}
