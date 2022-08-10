/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_percent.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 13:57:29 by ahorling      #+#    #+#                 */
/*   Updated: 2022/07/20 18:12:13 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	print_percent(size_t *length)
{
	ft_putchar('%');
	*length += 1;
	return ;
}
