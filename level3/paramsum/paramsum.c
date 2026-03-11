/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:35:18 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/09 17:37:30 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	(void) av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
