/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:58 by mguardia          #+#    #+#             */
/*   Updated: 2023/10/30 20:25:34 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function `ft_isprint` checks if a character is printable.
 * 
 * @param c The parameter "c" is of type "int" and represents a character.
 * 
 * @return a boolean value indicating whether the given character is printable or not.
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
