/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakotu <hakotu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:41 by hakotu            #+#    #+#             */
/*   Updated: 2024/01/28 17:03:19 by hakotu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c);

void	ft_first_line(int b, int x)
{
	if (b == 1)
		ft_putchar('o');
	else if (b > 1 && b < x)
		ft_putchar('-');
	else if (b == x)
		ft_putchar('o');
}

void	ft_midlle_line(int b, int x)
{
	if (b == 1)
		ft_putchar('|');
	else if (b > 1 && b < x)
		ft_putchar(' ');
	else if (b == x)
		ft_putchar('|');
}

void	ft_last_line(int b, int x)
{
	if (b == 1)
		ft_putchar('o');
	else if (b > 1 && b < x)
		ft_putchar('-');
	else if (b == x)
		ft_putchar('o');
}

void	rush01(int x, int y)
{
	int	raw;
	int	column;

	if (x < 0 || y < 0)
	{
		write (1, "Please enter a number greater than zero!!!", 42);
		return ;
	}
	raw = 1;
	while (raw <= y && x > 0)
	{
		column = 1;
		while (column <= x)
		{
			if (raw == 1)
				ft_first_line(column, x);
			else if (raw > 1 && raw < y)
				ft_midlle_line(column, x);
			else if (raw == y)
				ft_last_line(column, x);
			column++;
		}
		ft_putchar ('\n');
		raw++;
	}
}
