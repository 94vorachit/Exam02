/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:46:50 by vorhansa          #+#    #+#             */
/*   Updated: 2025/12/03 15:58:59 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum = (sum * 10) + str[i] - '0';
			i++;
		}
	}
	sum = sum * sign;
	return (sum);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (av[1])
		{
			printf("%d\n", ft_atoi(av[1]));
			printf("%d\n", atoi(av[1]));
			break;
		}
	}
	return (0);
}
