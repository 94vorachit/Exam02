/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:54:31 by vorhansa          #+#    #+#             */
/*   Updated: 2026/02/02 18:57:44 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*range;

	i = 0;
	len = (end - start) < 0 ? ((end - start) * -1) : (end - start);
	range = (int *)malloc(len * sizeof(int) + 1);
	if (!range)
		return (NULL);
	while (i <= len)
	{
		if (end < start)
			range[i] = start--;
		else
			range[i] = start++;
		i++;
	}
	return (range);
}
