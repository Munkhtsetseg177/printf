/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:33:07 by mbaatar           #+#    #+#             */
/*   Updated: 2022/09/29 13:26:58 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	print_char(int arg)
{
	return (write(1, &arg, 1));
}

unsigned int	print_string(char *arg)
{
	if(arg == NULL)
		return (write(1, "(null)", 6));
	return (write(1, arg, ft_strlen(arg)));	
}

unsigned int	print_pointer(unsigned long int arg)
{
	unsigned int	write_count;
	char	*base_char;
	
	base_char = "0123456789abcdef";
	write_count = 0;
	ft_putnbr_base(arg, base_char);
	write_count += ft_ptr_len(arg);
	return (write_count);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
