/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:59:51 by mguardia          #+#    #+#             */
/*   Updated: 2023/11/03 18:02:00 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_error function writes "Error" to the standard error output and exits the program with a
 * failure status.
 */
void    ft_error(void)
{
    write(STDERR, "Error\n", 6);
	exit(EXIT_FAILURE);
}