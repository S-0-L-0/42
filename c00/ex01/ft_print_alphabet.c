/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:06:59 by eforte            #+#    #+#             */
/*   Updated: 2023/02/16 18:13:51 by eforte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_alphabet(void)
{
    char a;
    a = 'a';
	while (a <= 'z')
	{
        write(1, &a, 1);
        a = a + 1;
    }
}
