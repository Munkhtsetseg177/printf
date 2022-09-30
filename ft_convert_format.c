/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:46:43 by mbaatar           #+#    #+#             */
/*   Updated: 2022/09/29 23:05:36 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int32_t	ft_convert_format(const char *formatStr, va_list args)
{
	if(*formatStr == 'i' || *formatStr == 'd')
		return(print_signed_decimal(va_arg(args, int32_t)));
	if(*formatStr == 'u')
		return(print_unsigned_decimal(va_arg(args, uint32_t)));
	if(*formatStr == 'c')
		return(print_char((va_arg(args, int32_t))));
	if(*formatStr == 's')
		return(print_string(va_arg(args, char *)));
	if(*formatStr == 'p')
		return(print_pointer(va_arg(args, size_t *)));
	if(*formatStr == 'x' || *formatStr == 'X')
		return(ft_print_hex(va_arg(args, uint32_t),*formatStr));
	if(*formatStr == '%')
		return(print_char('%'));
	return (0);
}
