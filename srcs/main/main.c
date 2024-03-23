/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:15:47 by root              #+#    #+#             */
/*   Updated: 2024/03/23 23:05:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	free_split_argv(char **split_argv)
{
	int	i;

	i = 0;
	while (split_argv[i] != NULL)
	{
		free (split_argv[i]);
		i++;
	}
	free (split_argv);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**split_argv;

	split_argv = argv;
	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		split_argv = split_str(argv[1], ' ');
	init_stack(&a, split_argv + 1);
	if (!is_stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stack(&a, &b);
	}
	free_stack(&a);
	if (argc == 2)
		free_split_argv(split_argv);
	return (0);
}
