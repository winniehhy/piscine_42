/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:27:36 by hheng             #+#    #+#             */
/*   Updated: 2024/01/15 09:47:52 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h> */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}
/* int main()
{
    char *a = "Hello World";
    printf("%d", ft_strlen(a));
}
*/
