/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguloglu <fguloglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:41:01 by fguloglu          #+#    #+#             */
/*   Updated: 2026/08/13 20:11:44 by fguloglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t	i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i;
	
// 	i = 0;
	
// 	char a[] = "Merhaba Fatih";
// 	printf("%s \n",(char *)ft_memchr(a,'h', 8));

// 	int b[] = {11,12,13,15};
// 	int *result = (int *)ft_memchr(b,12,9);
// 	while (i < 3)
// 	{
// 		printf("%d \n",result[i]);
// 		i++;
// 	}
// 	printf("%p\n",ft_memchr(a,'h',8));
	
// }