/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:34:09 by hheng             #+#    #+#             */
/*   Updated: 2024/01/12 11:34:09 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include<stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	swap_int;

	swap_int = *a;
	*a = *b;
	*b = swap_int;
}

/*int	main(void)
{
	int	a;
	int b;
	
	a = 1;
	b = 2;

	printf ("%d %d\n", a, b);
	ft_swap (&a, &b);
	printf ("%d %d\n", a, b);
}*/
