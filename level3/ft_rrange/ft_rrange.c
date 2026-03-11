/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:35:08 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/02 18:47:16 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*range;

	i = 0;
	if (end < start)
		len = (end - start) * -1;
	else
		len = (end - start);
	range = (int *)malloc(len * sizeof(int) + 1);
	if (!range)
		return (NULL);
	while (i <= len)
	{
		if (end < start)
			range[i] = end++;
		else
			range[i] = end--;
		i++;
	}
	return (range);
}

// len = (end - start) < 0 ? ((end - start) * -1) : (end - start);