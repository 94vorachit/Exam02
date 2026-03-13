/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:56:55 by vorhansa          #+#    #+#             */
/*   Updated: 2026/03/13 19:03:04 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		else if (av[2][0] == '-')
			printf("%d",atoi(av[1]) - atoi(av[3]));
		else if (av[2][0] == '*')
			printf("%d",atoi(av[1]) * atoi(av[3]));
		else if (av[2][0] == '/')
			printf("%d",atoi(av[1]) / atoi(av[3]));
		else if (av[2][0] == '%')
			printf("%d",atoi(av[1]) % atoi(av[3]));
	}
	printf("\n");
	return (0);
}
