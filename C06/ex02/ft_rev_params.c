/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:59:55 by hheng             #+#    #+#             */
/*   Updated: 2024/01/28 15:36:45 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	arg_index;
	int	char_index;

	arg_index = argc - 1;
	char_index = 0;
	while (arg_index > 0)
	{
		while (argv[arg_index][char_index] != '\0')
		{
			ft_putchar(argv[arg_index][char_index]);
			char_index++;
		}
		ft_putchar('\n');
		char_index = 0;
		arg_index--;
	}
	return (0);
}
