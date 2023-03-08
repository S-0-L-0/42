/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:18:27 by ldifino           #+#    #+#             */
/*   Updated: 2023/02/26 23:18:49 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_correct(int **permutation, int *rules);
void	ft_put_str(char *str);
void	ft_print_permutation(int **permutation, int dim);
int		**get_permutations(void);
int		*ft_get_rules(char *str);
int		**get_next_matrix(int **mx, int **permutations, int *permutation_rows);

void	init_permutation_rows(int *permutation_rows)
{
	permutation_rows[0] = 0;
	permutation_rows[1] = 0;
	permutation_rows[2] = 0;
	permutation_rows[3] = 0;
}

void	free_all(int **matrix, int **permutations)
{
	int	i;

	i = 0;
	while (i < 24)
		free(permutations[i++]);
	free(permutations);
	free(matrix);
}

int	main(int argc, char **argv)
{
	static int	**permutations;
	int			**matrix;
	int			permutation_rows[4];
	int			*rules;

	rules = ft_get_rules(argv[1]);
	init_permutation_rows(permutation_rows);
	permutations = get_permutations();
	matrix = (int **) malloc(4 * sizeof(int *));
	if (argc == 2 && rules)
	{
		matrix = get_next_matrix(matrix, permutations, permutation_rows);
		while (matrix)
		{
			if (is_correct(matrix, rules))
			{
				ft_print_permutation(matrix, 4);
				free_all(matrix, permutations);
				return (0);
			}
			matrix = get_next_matrix(matrix, permutations, permutation_rows);
		}
	}
	ft_put_str("Error\n");
	return (0);
}
