/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguardia <mguardia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:59:17 by mguardia          #+#    #+#             */
/*   Updated: 2023/09/14 13:33:08 by mguardia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*dstcopy;
	const char	*srccopy;
	size_t		remaining;
	size_t		dstlen;

	dstcopy = dst;
	srccopy = src;
	remaining = dstsize;
	while (remaining-- != 0 && *dstcopy)
		dstcopy++;
	dstlen = dstcopy - dst;
	remaining = dstsize - dstlen;
	if (remaining == 0)
		return (dstlen + ft_strlen(src));
	while (*srccopy)
	{
		if (remaining != 1)
		{
			*dstcopy++ = *srccopy;
			remaining--;
		}
		srccopy++;
	}
	*dstcopy = '\0';
	return (dstlen + (srccopy - src));
}
