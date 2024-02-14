/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:23:31 by hheng             #+#    #+#             */
/*   Updated: 2024/01/22 16:16:07 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((n > 0) && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s2 > *s1)
		{
			return (-1);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int main()
{
	char str1[]= "Hello";
	char str2[]= "World";
	char str3[]= "Hello";

	printf("Compare string 1 with string 2: %d\n", ft_strncmp(str1,str2, 3));
	printf("Compare string 2 with string 1: %d\n", ft_strncmp(str2,str1, 4));
	printf("Compare string 3 with string 1: %d\n", ft_strncmp(str1,str3, 5));
	return(0);
}*/
