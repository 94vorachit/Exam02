/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:29:48 by vorhansa          #+#    #+#             */
/*   Updated: 2026/03/11 19:41:15 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	max;

	max = 0;
	if (!tab)
		return (0);
	while (len-- > 0)
	{
		if (max < tab[len])
			max = tab[len];
	}
	return (max);
}

// int	max(int *tab, unsigned int len)
// {
// 	int	i;
// 	int max;
	
// 	if (!tab)
// 		return (0);
// 	i = 0;
// 	max = 0;
// 	while (len > 0)
// 	{
// 		if (tab[i] > max)
// 			max = tab[i];
// 		i++;
// 		len--;
// 	}
// 	return (max);
// }