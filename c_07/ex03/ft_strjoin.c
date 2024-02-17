/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:55:49 by hakotu            #+#    #+#             */
/*   Updated: 2024/02/14 10:15:42 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		c;

	ptr = (char *) malloc(sizeof(strs) + 1);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			ptr[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size -1)
			ptr[c++] = sep[j++];
		i++;
	}
	ptr[c] = '\0';
	return (ptr);
}

#include <stdio.h>
int main()
{
	char *str[] = {"Samet","Eylül","ali"};
	char *sep = ",";
	printf("%s",ft_strjoin(3,str,sep));
}