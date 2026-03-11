/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:19:54 by vorhansa          #+#    #+#             */
/*   Updated: 2025/12/18 16:23:19 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int	len;
	int	i;

	if (ac == 3)
	{
		len = 0;
		while (av[1][len])
			len ++;
		i = 0;
		while (i < len && *av[2])
		{
			if (av[1][i] == *av[2]++)
				i++;
		}
		if (i == len)
			write(1, av[1], len);
	}
	write(1, "\n", 1);
	return (0);
}
