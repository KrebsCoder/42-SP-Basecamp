/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 00:11:30 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/30 18:59:16 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	loop(int nb);
void	ft_print(int ltr);

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb != -2147483648)
	{
		loop(nb);
	}
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		nb /= -10;
		loop(nb);
		write(1, "8", 1);
	}
}

void	loop(int nb)
{
	if (nb >= 10)
	{
		loop(nb / 10);
	}
	ft_print(nb % 10 + '0');
}

void	ft_print(int ltr)
{
	write(1, &ltr, 1);
}
