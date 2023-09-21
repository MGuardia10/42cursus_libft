/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:25:45 by mguardia          #+#    #+#             */
/*   Updated: 2023/09/14 12:59:11 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	letter;

	letter = (char) c;
	while (*s)
	{
		if (*s == letter)
			return ((char *) s);
		s++;
	}
	if (letter == '\0')
		return ((char *) s);
	return (NULL);
}
