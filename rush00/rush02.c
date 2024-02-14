/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:12:07 by hheng             #+#    #+#             */
/*   Updated: 2024/01/13 18:12:15 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int	number;

	number = 0;
	while (number < x)
	{
		if (number == 0 || number == x - 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		number++;
	}
}

void	body_line(int x)
{
	int	number;

	number = 0;
	while (number < x)
	{
		if (number == 0 || number == x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		number++;
	}
}

void	final_line(int x)
{
	int	number;

	number = 0;
	while (number < x)
	{
		if (number == 0 || number == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		number++;
	}
}

void	rush(int x, int y)
{
	int	numbery;

	if (x <= 0 || y <= 0)
		return ;
	numbery = 0;
	if (numbery == 0)
	{
		first_line(x);
		numbery++;
		ft_putchar('\n');
	}
	while (numbery > 0 && numbery < y - 1)
	{
		body_line(x);
		numbery++;
		ft_putchar('\n');
	}
	if (numbery == y - 1)
	{
		final_line(x);
		numbery++;
		ft_putchar('\n');
	}
}
