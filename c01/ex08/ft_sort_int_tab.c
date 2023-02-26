/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:04:16 by eforte            #+#    #+#             */
/*   Updated: 2023/02/24 12:44:42 by eforte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	box;

	i = 0;
	j = 0;
	box = 0;
	while (i < size - 1)
	{
		while (j < size)
		{
			if (tab[j] > tab[j+1])
			{
				box = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = box;
			}
			j ++;
		}
		i ++;
	}
}

int main (void)
{
    int cont;
    int tab[]={4,2,5,1,3};
    ft_sort_int_tab(tab, 5);
    cont = 0;
    while (cont < 5)
    {
        printf("%d", tab[cont]);
        cont ++;
    }
    return (0);
}
