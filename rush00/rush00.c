/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:13:02 by bng               #+#    #+#             */
/*   Updated: 2024/01/13 17:51:38 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	number;

	number = 0;
	while (number < x)
	{
		if (number == 0 || number == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
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
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
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
		first_line(x);
		numbery++;
		ft_putchar('\n');
	}
}
