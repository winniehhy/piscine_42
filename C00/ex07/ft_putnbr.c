/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:55:29 by hheng             #+#    #+#             */
/*   Updated: 2024/01/11 17:55:29 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	no;

	no = nb;
	if (no < 0)
	{
		ft_putchar('-');
		no = -no;
	}
	if (no / 10 != 0)
		ft_putnbr(no / 10);
	ft_putchar(no % 10 + 48);
}

int main (void)
{
	ft_putnbr(67894322);
	return 0;
}
