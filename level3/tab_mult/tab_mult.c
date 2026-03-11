/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:24:17 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/09 15:48:22 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *s)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
		res = (res * 10) + s[i++] - '0';
	return (res);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int	i = 1;
	int	nb = ft_atoi(av[1]);
	while (i < 10)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putnbr(nb);
		ft_putstr(" = ");
		ft_putnbr(i * nb);
		ft_putstr("\n");
		i++;
	}
}
