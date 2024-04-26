/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:44:45 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/26 14:54:57 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_list **stack)
{
    if (!*stack)
        return (1);
    while (*stack && (*stack)->next)
    {
        if ((*stack)->value > (*stack)->next->value)
        {
            printf("\n");
            return (0);
        }
        *stack = (*stack) -> next;
    }
    return (1);
}