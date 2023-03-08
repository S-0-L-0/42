/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:19:04 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/26 23:19:17 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_permutation(int **permutation, int dim);

int	digits_are_different(int d1, int d2, int d3, int d4)
{
	if (d1 == d2 || d1 == d3 || d1 == d4 || d2 == d3 || d2 == d4 || d3 == d4)
		return (0);
	return (1);
}

int	is_valid_matrix(int **mx)
{
	if (! digits_are_different(mx[0][0], mx[0][1], mx[0][2], mx[0][3]))
		return (0);
	if (! digits_are_different(mx[1][0], mx[1][1], mx[1][2], mx[1][3]))
		return (0);
	if (! digits_are_different(mx[2][0], mx[2][1], mx[2][2], mx[2][3]))
		return (0);
	if (! digits_are_different(mx[3][0], mx[3][1], mx[3][2], mx[3][3]))
		return (0);
	if (! digits_are_different(mx[0][0], mx[1][0], mx[2][0], mx[3][0]))
		return (0);
	if (! digits_are_different(mx[0][1], mx[1][1], mx[2][1], mx[3][1]))
		return (0);
	if (! digits_are_different(mx[0][2], mx[1][2], mx[2][2], mx[3][2]))
		return (0);
	if (! digits_are_different(mx[0][3], mx[1][3], mx[2][3], mx[3][3]))
		return (0);
	return (1);
}

int	update_permutation_rows(int *pr)
{
	if (pr[0] == 23 && pr[1] == 23 && pr[2] == 23 && pr[3] == 23)
	{
		return (0);
	}
	if (pr[3] < 23)
		pr[3]++;
	else if (pr[2] < 23)
	{
		pr[2]++;
		pr[3] = 0;
	}
	else if (pr[1] < 23)
	{
		pr[1]++;
		pr[2] = 0;
		pr[3] = 0;
	}
	else if (pr[0] < 23)
	{
		pr[0]++;
		pr[1] = 0;
		pr[2] = 0;
		pr[3] = 0;
	}
	return (1);
}

void	set_matrix(int **matrix, int **permutations, int *permutation_rows)
{
	matrix[0] = permutations[permutation_rows[0]];
	matrix[1] = permutations[permutation_rows[1]];
	matrix[2] = permutations[permutation_rows[2]];
	matrix[3] = permutations[permutation_rows[3]];
}

int	**get_next_matrix(int **mx, int **permutations, int *permutation_rows)
{
	if (update_permutation_rows(permutation_rows))
	{
		set_matrix(mx, permutations, permutation_rows);
	}
	else
	{
		return (0);
	}
	while (! is_valid_matrix(mx))
	{
		if (update_permutation_rows(permutation_rows))
			set_matrix(mx, permutations, permutation_rows);
		else
		{
			return (0);
		}
	}
	return (mx);
}	
