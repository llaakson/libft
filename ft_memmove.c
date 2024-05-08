/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:56:13 by llaakson          #+#    #+#             */
/*   Updated: 2024/04/27 22:23:10 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	destination = (char *) dst;
	source = (char *) src;
	i = n;
	if (n == 0)
		return (dst);
	if (destination == source)
		return (dst);
	if (source < destination)
	{
		while (n--)
			destination[n] = source[n];
	}
	else
	{
		while (i--)
			*destination++ = *source++;
	}
	return (dst);
}
