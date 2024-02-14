/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:31:32 by hheng             #+#    #+#             */
/*   Updated: 2024/01/22 17:35:24 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = 0;
	while (src[j] && i + j + 1 < size)
		j++;
	while (*src && i + 1 < size)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	return (i + j);
}

/*int main() 
{
    char dest[20] = "Hello";
    char src[] = ", World!";

    unsigned int result = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated String: %s\n", dest);
    printf("Total Length: %u\n", result);

    return 0;
}*/
