/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:18:55 by hheng             #+#    #+#             */
/*   Updated: 2024/01/27 16:30:35 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h> 

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
    while (src [i] != 0 && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = 0;
        i++;
    }
    return (dest);
}

/*int main() 
{
    char src[] = "Source";
    char dest[]= "Destination";
    unsigned int n;

    n = 10;
    printf("Before\n\tsrc: %s\n\tdes: %s\n", src, dest);
    ft_strncpy(dest, src, n);
    printf("After\n\tsrc: %s\n\tdes: %s\n", src, dest);
    return (0);
    } */
