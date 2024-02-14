/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:29:42 by hheng             #+#    #+#             */
/*   Updated: 2024/01/31 11:27:04 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	checkbase(char *str)
{
	int	currentIndex;
	int	comparisonIndex;

	currentIndex = 0;
	if (!str[currentIndex])
		return (0);
	comparisonIndex = 0;
	while (str[currentIndex] != '\0')
	{
		if (str[currentIndex] == '+' || str[currentIndex] == '-')
			return (0);
		while (comparisonIndex < currentIndex)
		{
			if (str[comparisonIndex] == str[currentIndex]) //check if the there is any repreated 
				return (0);
			comparisonIndex++;
		}
		comparisonIndex = 0;
		currentIndex++;
	}
	return (1);
}

	void	ft_putnbr_base(int nbr, char *base)
	{
		long	nu;
		int	base_len;

		base_len = ft_strlen(base);
		if (!checkbase(base) || base_len <= 1)
			return ;
		nu = nbr;
		if (nu < 0)
		{
			ft_putchar('-');
			nu *= -1;
		}
		if (nu > (base_len - 1))
			ft_putnbr_base(nu / base_len, base);
		ft_putchar(base[nu % base_len]);
	}

int	main(void)
{
	char	*base;
	base = "012345"; //to
	ft_putnbr_base(10, base); //from base 10
	return (0);
}
