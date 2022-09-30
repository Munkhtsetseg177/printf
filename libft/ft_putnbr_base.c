/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:05:56 by mbaatar           #+#    #+#             */
/*   Updated: 2022/09/29 11:09:35 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(unsigned long long nb, char *base)
{
	if(nb >= 16)
		ft_putnbr_base((nb / 16), base);
	ft_putchar(base[nb % 16]);
}