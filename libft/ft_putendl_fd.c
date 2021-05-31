/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 11:57:41 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/13 14:10:58 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *string, int fd)
{
	int	len;

	len = ft_strlen(string);
	if (fd >= 0 && string != NULL)
	{
		write(fd, string, len);
		write(fd, "\n", 1);
	}
}
