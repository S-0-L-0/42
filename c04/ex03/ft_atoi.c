/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 04:23:33 by eforte            #+#    #+#             */
/*   Updated: 2023/03/05 17:36:50 by eforte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		num;
	int		i;
	int		sign;

	i = 0;
	num = 0;
	sign = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign ++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
		}
		i ++;
	}
	if (sign % 2 != 0)
	{
		num = -num;
	}
	return (num);
}
