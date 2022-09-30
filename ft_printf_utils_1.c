/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:09:37 by mbaatar           #+#    #+#             */
/*   Updated: 2022/09/29 12:47:57 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	print_signed_decimal(int arg)
{
	char	*int_to_alpha;
	int	length;
	
	int_to_alpha = ft_itoa(arg);
	ft_putstr_fd(int_to_alpha, 1);
	length = ft_strlen(int_to_alpha);
	free(int_to_alpha);
	return (length);
}

unsigned int	print_unsigned_decimal(unsigned int arg)
{
	char	*int_to_alpha;
	int	length;
	
	int_to_alpha = ft_uitoa(arg);
	ft_putstr_fd(int_to_alpha, 1);
	length = ft_strlen(int_to_alpha);
	free(int_to_alpha);
	return (length);
}

int	ft_print_hex(const char format, unsigned int num)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
