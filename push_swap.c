/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:57:44 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/23 21:13:26 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	if (!check_input(argc, argv))
		return (0);
	stack_a = fill_stack_values(argv);
	sort_three(stack_a);
	// while (stack_a)
	// {
	// 	printf("%d\n", stack_a->value);
	// 	stack_a = stack_a->next;
	// }
	// free_stack(stack_a, argv);
	// system("leaks push_swap");
	return (0);
}
