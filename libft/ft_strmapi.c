/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 14:06:16 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/11 19:49:16 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rstring;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	rstring = (char *)malloc((ft_strlen(s) + 1) * (sizeof(char)));
	if (rstring == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		rstring[i] = f(i, s[i]);
		i++;
	}
	rstring[i] = '\0';
	return (rstring);
}
