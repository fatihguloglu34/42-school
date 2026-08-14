/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguloglu <fguloglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:41:07 by fguloglu          #+#    #+#             */
/*   Updated: 2026/08/14 17:50:28 by fguloglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *a;
	size_t	i;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (s);
}


// #include <stdio.h>
// int main(void)
// {	
// 	int a= 10;

// 	ft_memset(&a, 13, 2);
// 	ft_memset(&a, , 1);
// 	printf("%d", a);
	
	
// 	char	str[] = "Fatih";
// 	char	str2[] = "Merhaba Dunya";
// 	char	str3[] = "123456789";
	
// 	printf("test1: %s \n",str);
// 	ft_memset(str,'a',3);
// 	printf("test1 sonra: %s \n",str);
	
// 	printf("test2: %s \n",str2);
// 	ft_memset(str2,'*',7);
// 	printf("test2 sonra: %s \n",str2);
	
// 	printf("test3: %s \n",str3);
// 	ft_memset(str3,'0',5);
// 	printf("test3 sonra: %s \n",str3);
	
// }