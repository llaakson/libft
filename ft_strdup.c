/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:40:16 by llaakson          #+#    #+#             */
/*   Updated: 2024/04/25 12:24:00 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*source;
	char	*destination;
	int		i;

	source = (char *)src;
	destination = malloc (sizeof(char) * (ft_strlen(source) + 1));
	if (destination == NULL)
		return (NULL);
	i = 0;
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		++i;
	}
	destination[i] = '\0';
	return (destination);
}
