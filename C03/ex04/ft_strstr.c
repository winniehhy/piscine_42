/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:20:26 by hheng             #+#    #+#             */
/*   Updated: 2024/01/29 16:11:33 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j] && str[i] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}	
		i++;
	}
	return (0);
}
int	main()
{
    char text[] = "Hello, world!This is an example.";
    char to_find[] = "This";

    char *result = ft_strstr(text, to_find);

    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - text);
        printf("Substring: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
