/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 11:46:26 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/13 14:10:56 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *string, int fd)
{
	int	len;

	len = ft_strlen(string);
	if (fd >= 0 && string != NULL)
		write(fd, string, len);
}
