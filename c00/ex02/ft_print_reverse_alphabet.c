/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:25:07 by eforte            #+#    #+#             */
/*   Updated: 2023/02/16 18:38:20 by eforte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
char z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
			z = z - 1;}
}
