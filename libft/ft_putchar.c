/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:08:29 by mbaatar           #+#    #+#             */
/*   Updated: 2022/09/29 11:34:02 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_print_char(int arg)
{
	return (write(1, &arg, 1));
}