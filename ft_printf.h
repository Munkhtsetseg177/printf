/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:09:45 by mbaatar           #+#    #+#             */
/*   Updated: 2022/09/29 22:54:06 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *formatString, ...);
unsigned int	print_char(int arg);
unsigned int print_string(char *arg);
unsigned int	print_pointer(unsigned long int arg);
unsigned int	print_signed_decimal(int arg);
unsigned int	print_unsigned_decimal(unsigned int arg);
int	ft_print_hex(const char format, unsigned int num);
int	convert_format(const char *formatStr, va_list args);

#endif