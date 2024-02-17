/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:29:31 by hakotu            #+#    #+#             */
/*   Updated: 2024/02/07 16:16:15 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	printf("%d", ft_strncmp("Heslo", "Hello1",3));
	printf("\n%d", ft_strncmp("Hello", "Hek",3));
	printf("\n%d", ft_strncmp("He", "Hello",2));
	printf("\n%d", ft_strncmp("Hello", "Hello",3));
} 