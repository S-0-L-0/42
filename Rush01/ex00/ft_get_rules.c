/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rules.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:16:15 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/26 23:16:53 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*skip_blanks(char *str)
{
	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	return (str);
}

int	is_single_and_valid_digit(char *str)
{
	if (*str >= '1' && *str <= '4')
		if (*(str + 1) && *(str + 1) != ' ')
			return (0);
	return (1);
}

int	*ft_get_rules(char *str)
{
	int	*nums;
	int	*start;

	nums = (int *) malloc(16 * sizeof(int));
	start = nums;
	str = skip_blanks(str);
	while (*str)
	{
		if (is_single_and_valid_digit(str))
			*nums++ = *str++ - '0';
		else
		{
			free(start);
			return (0);
		}
		str = skip_blanks(str);
	}
	if (nums - start != 16)
	{
		free(start);
		return (0);
	}
	return (start);
}
