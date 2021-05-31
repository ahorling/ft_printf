/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 11:09:08 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/12 21:51:24 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	if (s1 == s2 || size == 0)
		return (0);
	while (i < size - 1 && s1[i] == s2[i])
		i++;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
