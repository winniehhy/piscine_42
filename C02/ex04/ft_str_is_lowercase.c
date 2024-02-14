/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:05:38 by hheng             #+#    #+#             */
/*   Updated: 2024/01/16 18:52:23 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main()
{
    char *upper, *small;

    upper = "HELLO";
    small = "hahahahaha";
    
    printf("Uppercase charcter: %d\n", ft_str_is_lowercase(upper));
    printf("Lowercase character: %d\n", ft_str_is_lowercase(small));
    return 0;
}*/
