/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 16:11:28 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/12 22:36:38 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*input;

	input = (char *)str;
	while (*input != '\0')
	{
		if (*input == (char)c)
			return (input);
		input++;
	}
	if ((char)c == '\0')
		return (input);
	return (NULL);
}
