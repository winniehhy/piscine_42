/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:18:21 by hheng             #+#    #+#             */
/*   Updated: 2024/01/25 13:41:33 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (!nb);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_recursive_factorial(0));
	return (0);
}*/
