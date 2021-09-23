/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hexalower.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 14:33:05 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/23 14:47:45 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hexa_lower(unsigned int n)
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
			string[i] = temp + 48;
		if (temp > 9)
			string[i] = temp + 87;
		n = n / 16;
		i++;
	}
	i--;
	temp = i;
	while (i >= 0)
	{
		write (1, &string[i], 1);
		i--;
	}
	return (temp);
}