/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hexlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 17:38:44 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/08 17:53:09 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexlen(unsigned long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		size++;
	}
	return (size);
}