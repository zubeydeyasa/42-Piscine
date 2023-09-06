/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyasa <zyasa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:17:02 by zyasa             #+#    #+#             */
/*   Updated: 2022/11/15 12:52:07 by zyasa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex_low(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[n / 16], 1);
	write(1, &hex[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] < 32)
		{
			write(1, "\\", 1);
			hex_low(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}