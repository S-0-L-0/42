/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:03:23 by eforte            #+#    #+#             */
/*   Updated: 2023/02/24 11:39:29 by eforte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	box;
	int	i;
	int	j;

	box = 0;
	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		box = tab[i];
		tab[i] = tab[j];
		tab[j] = box;
		i ++;
		j --;
	}
}
