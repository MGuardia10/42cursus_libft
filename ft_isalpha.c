/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:38:26 by mguardia          #+#    #+#             */
/*   Updated: 2023/10/30 20:25:56 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_isalpha` checks if a given character is an alphabetic character.
 * 
 * @param c The parameter "c" is of type "int" and represents a character.
 * 
 * @return a boolean value indicating whether the given character is an alphabetic character or not. It
 * returns 1 if the character is an alphabetic character and 0 otherwise.
 */
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
