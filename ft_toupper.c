/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:29:24 by mguardia          #+#    #+#             */
/*   Updated: 2023/10/30 20:33:40 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_toupper converts a lowercase letter to uppercase.
 * 
 * @param c The parameter "c" is of type int and represents a character.
 * 
 * @return the uppercase version of the input character if it is a lowercase letter. If the input
 * character is not a lowercase letter, it is returned as is.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
