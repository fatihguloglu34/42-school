/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguloglu <fguloglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:40:39 by fguloglu          #+#    #+#             */
/*   Updated: 2026/08/11 16:06:33 by fguloglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *str)
{
	int	i;
	int	number;
	int	result;

	i = 0;
	number = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			number = number * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * number);
}