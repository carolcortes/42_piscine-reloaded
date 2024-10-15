/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:54:01 by cade-oli          #+#    #+#             */
/*   Updated: 2024/10/15 15:07:58 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr || min >= max)
		return (NULL);
	i = -1;
	while (min < max)
	{
		arr[++i] = min;
		min++;
	}
	return (arr);
}
