/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexa_upper.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 14:15:41 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/23 14:29:14 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_print_hexa_upper(int n)
{
	int		i;
	char	string[100];
	int		temp;

	i = 0;
	temp = 0;
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			string[i] = temp + 48;
			i++;
		}
		if (temp > 9)
		{
			string[i] = temp + 55;
			i++;
		}
		n = n / 16;
	}
	i--;
	while (i >= 0)
	{
		write (1, &string[i], 1);
		i--;
	}
}