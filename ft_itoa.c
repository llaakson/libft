/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:48:10 by llaakson          #+#    #+#             */
/*   Updated: 2024/04/28 21:48:48 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int nb)
{
	int	i;

	i = 1;
	while (nb /= 10)
		++i;
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*str;
	size_t	a;
	size_t	i;
	long int	l;

	l = nb;
	a = counter(l);
	if (nb < 0)
	{
		l *= -1;
		a++;
	}
	str = (char *)malloc(sizeof(char) * (a + 1));
	if (str == NULL)
		return (NULL);
	i = a;
	str[i] = '\0';
	while (--i)
	{
		str[i] = (l % 10 + '0');
		l = l / 10;
	}
	if (nb < 0)
		str[0] = '-';
	else
		str[0] = l + '0';
	return (str);
}
