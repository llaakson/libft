/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:25 by llaakson          #+#    #+#             */
/*   Updated: 2024/05/08 14:45:23 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trimmed;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i <= j)
		++i;
	while (ft_strchr(set, s1[j]) && j >= 0)
		--j;
	trimmed = malloc(sizeof(char) * (j - i + 2));
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, &s1[i], j - i + 2);
	return (trimmed);
}
