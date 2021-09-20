/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 15:14:14 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/20 15:15:16 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar('-', fd);
		ft_putnbr((n * -1), fd);
	}
	else if (n > 9)
	{
		ft_putnbr((n / 10), fd);
		ft_putnbr((n % 10), fd);
	}
	else
	{
		ft_putchar((n + '0'), fd);
	}
}
