/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:13:24 by hheng             #+#    #+#             */
/*   Updated: 2024/01/28 14:51:30 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	arg_index;
	int	char_index;

	arg_index = 1;
	char_index = 0;
	while (arg_index < ac)
	{
		while (av[arg_index][char_index] != '\0')
		{
			ft_putchar(av[arg_index][char_index]);
			char_index++;
		}
		ft_putchar('\n');
		char_index = 0;
		arg_index++;
	}
	return (0);
}
