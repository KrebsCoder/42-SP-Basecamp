/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:39:53 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/21 19:39:54 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0' - 1;
	while (x++ <= '7')
	{
		y = x;
		while (y++ <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{	
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (!(x == '7' && y == '8' && z == '9'))
					write(1, ", ", 2);
				z++;
			}
		}	
	}
}
