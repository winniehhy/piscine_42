/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:58:17 by hheng             #+#    #+#             */
/*   Updated: 2024/01/31 18:18:01 by hheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while(str[count]!= '\0')
	{
		count++;
	}
	return (count);
}
int	ft_checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[i])
		return (0);
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			return (0);
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;

	// if (!ft_checkbase(base) || ft_strlen(base) <= 1)
	// 	return (0);
	while (str[i] != '\0' && ft_base(str[i], base))
	{
		nb = nb * ft_strlen(base) + ft_index_in_base(str[i], base);
		i++;
	}
	return (nb * sign);
}

#include <stdio.h>

int main (void)
{
	char *base = "0123456789ABCDEF";

	/*
	=============================================================
	BAD BASE
	*/
	char *test_bad_base[] = {
		"110",
		"1",
		"10hgjk+",
		"10ya-qe",
		"10wj ",
		"10ugwn	klm",
		"",
		" "
	};

	char *bad_base_desc[] = {
		"repeated",
		"only one char",
		"has +",
		"has -",
		"has space",
		"has tab",
		"is empty",
		"has only space"
	};

	int bad_base_size = 8;
	int k = 0;
	printf("\n\n=============\n");
	printf("BAD BASE\n");
	while (k < bad_base_size)
	{
		printf("Base     : %s\n", test_bad_base[k]);
		printf("Desc     : %s\n", bad_base_desc[k]);
		printf("Output   : %i\n\n", ft_atoi_base("100", test_bad_base[k]));
		k++;
	}
	printf("=============\n\n");
	/*
	=============================================================
	*/

	/*
	=============================================================
	BAD INPUT
	*/
	char *test_bad_input[] = {
		"a",
		"",
		" ",
		"	",
		" - 3	 ",
		"  -",
		"   + 2",
		"- ?1",
		" & "
	};

	

	int bad_input_size = 9;
	int j = 0;
	printf("\n\n=============\n");
	printf("BAD INPUT\n");
	while (j < bad_input_size)
	{
		printf("Input    : %s\n", test_bad_input[j]);
		printf("Output   : %i\n\n", ft_atoi_base(test_bad_input[j], base));
		j++;
	}
	printf("=============\n\n");
	/*
	=============================================================
	*/

	
	/*
	=============================================================
	GOOD INPUT
	*/
	char *test_good_input[] = {
		"1",
		"-1",
		"",
		"0",
		"-0",
		"123",
		"-123",
		"A13",
		"-A13",
		"90A    ",    //spaces
		"    90A",    //spaces
		"   90A   ",  //spaces
		"90A		",//tabs
		"		90A", //tabs
		"	90A		",//tabs
		"---1F6",
		"+++1F6",
		"-+-1F6",
		"+--+1F6",
		"  --1F6",
		"  ---1F6",
		"	 --++--A86G	  ",
		"FFFFFFFFF",
		"7FFFFFFF",
		"-79999999",
		"80000000",
		"-80000000"
	};

	int test_good_expected[] = {
		1,
		-1,
		0,
		0,
		-0,
		291,
		-291,
		2579,
		-2579,
		2314,    
		2314,   
		2314,  
		2314,
		2314,
		24314,
		-502,
		502,
		502,
		502,
		502,
		502,
		2694,
		0,
		2147483647,
		-2040109465,
		0,
		-2147483648
	};
	

	int good_input_size = sizeof(test_good_expected) / sizeof(test_good_expected[0]);
	int i = 0;
	printf("\n\n=============\n");
	printf("GOOD INPUT\n");
	while (i < good_input_size)
	{
		printf("Input    : %s\n", test_good_input[i]);
		printf("Output   : %i\n", ft_atoi_base(test_good_input[i], base));
		printf("Expected : %i\n\n", test_good_expected[i]);
		i++;
	}
	printf("=============\n\n");
	// int res = ft_atoi_base("--aa", "0123456789abcdef");
	// printf("%i", res);
}
