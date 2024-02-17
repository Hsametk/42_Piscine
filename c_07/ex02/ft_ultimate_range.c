/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:11:54 by hakotu            #+#    #+#             */
/*   Updated: 2024/02/14 10:44:37 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		return (0);
	i = max - min;
	result = (int *)malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range (min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}

#include <stdio.h>
int main()
{
	int min = 4;
	int max = 12;
	int size;
	int *tab;
	int i = 0;
	size = ft_ultimate_range(&tab,min , max);

	while(i < size)
	{
		printf("%d, ",tab[i]);
		i++;
	}
}
