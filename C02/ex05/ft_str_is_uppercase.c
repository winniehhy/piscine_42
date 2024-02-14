/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:06:21 by hheng             #+#    #+#             */
/*   Updated: 2024/01/16 19:06:23 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	char *upper, *other;

	upper = "HI";
	other = "pass the EXAM";
	printf("Upper character : %d\n", ft_str_is_uppercase(upper));
	printf("Other character: %d\n", ft_str_is_uppercase(other));
	return 0;
}*/
