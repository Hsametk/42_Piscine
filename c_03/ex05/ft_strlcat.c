/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:47:17 by hakotu            #+#    #+#             */
/*   Updated: 2024/02/07 14:05:09 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char dest[10] = "Samet";
	char src[] = "Furkan";
	char dest1[10] = "Samet";
	char src1[] = "Furkan";
	unsigned int size = 7;
	printf("%d ", ft_strlcat(dest1,src1,size));
	printf("%s ", dest1);
	printf("%lu ", strlcat(dest,src,size));
	printf("%s", dest);
}
*/