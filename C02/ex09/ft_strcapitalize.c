/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:38:06 by hheng             #+#    #+#             */
/*   Updated: 2024/01/26 12:09:13 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return (ft_is_lowercase(c) || ft_is_uppercase(c) || ft_is_number(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
x
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_alpha(str[i -1]) && ft_is_lowercase(str[i]))
		{
			str[i] -= 32;
		}
		else if (ft_is_alpha(str[i -1]) && ft_is_uppercase(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
int main(void)
{
	char str[ ] = "42mots hello";
	ft_strcapitalize(str);
    printf("%s\n", str);
	return 0;
}
