/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:35:01 by hheng             #+#    #+#             */
/*   Updated: 2024/01/30 15:20:41 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = NULL;
	dest = malloc(sizeof(char) * ft_strlen(src));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(void)
{
	char	*text;

	text = "Salut les kheyyys";
	printf("OUTPUT: %s\n", ft_strdup(text));
	return (0);
}*/
