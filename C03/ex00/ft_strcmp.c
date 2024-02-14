/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:50:34 by hheng             #+#    #+#             */
/*   Updated: 2024/01/24 17:45:04 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int main() 
{
    char str1[] = "Hello"; //72 -87  = -15
    char str2[] = "World"; //87 -72 = 15
    char str3[] = "Hello";
    
    printf("Comparison result: %d\n", ft_strcmp(str1, str2));
    printf("Comparison result: %d\n", ft_strcmp(str1, str3));
    printf("Comparison result: %d\n", ft_strcmp(str2, str1));

    return 0;
} 
