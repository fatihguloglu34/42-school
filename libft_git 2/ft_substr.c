/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguloglu <fguloglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:28:27 by fguloglu          #+#    #+#             */
/*   Updated: 2026/08/14 21:21:25 by fguloglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *str;
	size_t s_len;
	size_t	i;
	
	if(!s)
		return(NULL);
	s_len = ft_strlen(s);
	if(start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char) * 1);
		if(!str)
			return(NULL);
		str[0] = '\0';
		return (str);
	}
	if(len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if(!str)
		return(NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = "Merhaba fatih";
	
// 	char *result;

// 	result = ft_substr(str, 8, 5);
// 	printf("Test 1 (Normal)     : %s\n", result);
// 	free(result); 

	
// 	result = ft_substr(str, 8, 100);
// 	printf("Test 2 (Uzun len)   : %s\n", result);
// 	free(result);

// 	result = ft_substr(str, 50, 5);
// 	printf("Test 3 (Büyük start): \"%s\"\n", result);
// 	free(result);
// }