/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_char.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 13:19:43 by ahorling      #+#    #+#                 */
/*   Updated: 2022/07/20 18:09:19 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	print_char(int c, size_t *length)
{
	ft_putchar(c);
	*length += 1;
	return ;
}
