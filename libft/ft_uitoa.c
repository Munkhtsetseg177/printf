/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:17:59 by mbaatar           #+#    #+#             */
/*   Updated: 2022/09/12 21:51:48 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Takes an unsigned int, and converts it to a null-terminated string.
*/

static unsigned int	get_nb_digit(long n_l)
{
	unsigned int	nb_digit;

	if (n_l == 0)
		return (1);
	nb_digit = 0;
	while (n_l > 0)
	{
		nb_digit++;
		n_l /= 10;
	}
	return (nb_digit);
}

static void	convert_nb(char *outstr, unsigned long long n_l, size_t nb_digit)
{
	outstr[nb_digit] = '\0';
	while (nb_digit > 0)
	{
		outstr[--nb_digit] = (n_l % 10) + '0';
		n_l /= 10;
	}
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}
