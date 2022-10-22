/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:53:47 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/22 02:40:30 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// cette fonction supprime le contenu de tous les nodes et free tous les nodes
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (lst && *lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
