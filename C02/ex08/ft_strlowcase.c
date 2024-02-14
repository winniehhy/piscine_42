/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:21:46 by hheng             #+#    #+#             */
/*   Updated: 2024/01/17 11:21:47 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str [i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char text[5] = "ADIOS";

	printf ("Before : %s\n", text);

	ft_strlowcase(text);
	printf ("After : %s\n", text);
	return 0;
	}*/
