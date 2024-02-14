/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:06:34 by hheng             #+#    #+#             */
/*   Updated: 2024/01/31 14:11:03 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	index;
	int	sep_len;
	int	total_len;

	index = 0;
	sep_len = ft_strlen(sep);
	total_len = 0;
	while (index < size)
	{
		total_len += ft_strlen(strs[index]);
		if (index < size - 1)
			total_len += sep_len;
		index++;
	}
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_index;
	int	src_index;

	dest_index = 0;
	src_index = 0;
	while (dest[dest_index] != '\0')
		dest++;
	while (src[src_index] != '\0')
	{
		dest[dest_index + src_index] = src[src_index];
		src_index++;
	}
	dest[dest_index + src_index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		index;
	int		total_len;

	index = 0;
	total_len = ft_total_size(size, strs, sep) + 1;
	text = malloc(sizeof(char) * total_len);
	if (!text)
		return (0);
	*text = 0;
	while (index < size)
	{
		ft_strcat(text, strs[index]);
		if (index < size - 1)
			ft_strcat(text, sep);
		index++;
	}
	return (text);
}

/*int	main(void)
{
	int	size = 5;
	char	*strs[] = {"a", "b", "hello", "   ", "OK"};
	char	sep[] = "----";

	printf("OUTPUT: %s\n", ft_strjoin(size, strs, sep));
	return (0);
}*/
