/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:10:54 by hheng             #+#    #+#             */
/*   Updated: 2024/01/25 16:11:11 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (!power);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

// int	main(void)
// {
// 	printf("OUTPUT: %d\n", ft_recursive_power(2, 2));
// 	return (0);
// }
