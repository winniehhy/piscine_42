/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:09:33 by hheng             #+#    #+#             */
/*   Updated: 2024/01/16 17:32:47 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
    char *text, *number;
//alphabetic 
    text = "Abcdefghijklmnopqrstuv";
    number= "hihi0123";
    printf("Alphabetic output: %d\n", ft_str_is_alpha(text));
    printf("Other character: %i\n", ft_str_is_alpha(number));
    return 0;
}*/
