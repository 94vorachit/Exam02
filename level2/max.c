/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:02:41 by vorhansa          #+#    #+#             */
/*   Updated: 2026/01/05 16:57:08 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	if (!tab)
		return (0);
	while (len > 0)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
		len--;
	}
	return (max);
}

// #include <stdio.h>
// int	main()
// {
// 	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	printf("%d\n", max(tab, 10));
// }