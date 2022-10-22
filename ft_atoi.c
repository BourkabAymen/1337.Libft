/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:47:38 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/20 22:00:39 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//cette fonction détermine si le caractère c est non affichable ou non 
int	ft_iswspc(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

// cette fonction convertie un nombre contenu dans nptr en sa base décimale
int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (nptr[i] != '\0' && ft_iswspc(nptr[i]) == 1)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]) == 1)
	{
		res *= 10;
		res += nptr[i] - 48;
		i++;
	}
	return (res * sign);
}
