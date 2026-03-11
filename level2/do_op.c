/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:29:53 by vorhansa          #+#    #+#             */
/*   Updated: 2025/12/03 14:45:37 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		while (av[2][0])
		{
			if (av[2][0] == '+')
				printf("%d", atoi(av[1]) + atoi(av[3]));
			if (av[2][0] == '-')
				printf("%d", atoi(av[1]) - atoi(av[3]));
			if (av[2][0] == '*')
				printf("%d", atoi(av[1]) * atoi(av[3]));
			if (av[2][0] == '/')
				printf("%d", atoi(av[1]) / atoi(av[3]));
			if (av[2][0] == '%')
				printf("%d", atoi(av[1]) % atoi(av[3]));
			break;
		}
	}
	printf("\n");
}
