/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguloglu <fguloglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:41:06 by fguloglu          #+#    #+#             */
/*   Updated: 2026/08/14 19:17:19 by fguloglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
		
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if(!dest && !src)
		return(NULL);
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(dest,src,n);
	return (dest);
}


#include <stdio.h>

int main(void)
{
	char str[] = "Merhaba FAtih";
	char str2[] = "Selam";

	printf("test öncesi: %s \n",str);
	ft_memmove(str + 1,str2,3);
	printf("test öncesi: %s \n",str);
	
}