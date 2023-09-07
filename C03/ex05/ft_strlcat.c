/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyasa <zyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:17:02 by zyasa             #+#    #+#             */
/*   Updated: 2022/11/15 12:52:07 by zyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	i;

	ld = 0;
	ls = 0;
	i = 0;
	while (src[ls] != '\0')
		ls++;
	while (dest[ld] != '\0')
		ld++;
	if (size == 0)
		return (ls);
	if (size <= ld)
		return (ls + size);
	while (src[i] && ld < size - 1 && i < size - 1)
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (ld + ls);
}