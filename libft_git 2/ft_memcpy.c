/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguloglu <fguloglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:41:03 by fguloglu          #+#    #+#             */
/*   Updated: 2026/08/14 18:18:23 by fguloglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t	i;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	
	if(!dest && !src)
		return(NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "Merhaba";
// 	char str2[] = "Fatih";
	
// 	printf("Test Öncesi: %s \n",str);
// 	ft_memcpy(str,str2,3);
// 	printf("Test Sonrası: %s \n",str);
// }