/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:59:28 by mbaatar           #+#    #+#             */
/*   Updated: 2022/09/29 23:05:29 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int32_t	ft_convert_format(const char *formatStr, va_list args);

int32_t	ft_printf(const char *formatString, ...)
{
	size_t	write_count;
	va_list args;

	va_start(args, formatString);
	write_count = 0;
	while(*formatString)
	{
		if(*formatString != '%')
			write_count += ft_putchar_fd(*formatString);
		else
		{
			formatString ++;
			write_count = convert_format(formatString, list_args);
		}
		formatString ++; 
	}	
	va_end(list_args);
	return (write_count);
}
