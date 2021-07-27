/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 19:53:11 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/21 23:25:38 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	con1;
	int	con2;

	con1 = 0;
	while (con1 <= 98)
	{
		con2 = con1 + 1;
		while (con2 <= 99)
		{
			ft_putchar(48 + (con1 / 10));
			ft_putchar(48 + (con1 % 10));
			ft_putchar(' ');
			ft_putchar(48 + (con2 / 10));
			ft_putchar(48 + (con2 % 10));
			if (!(con1 == 98 && con2 == 99))
				write(1, ", ", 2);
			con2++;
		}
		con1++;
	}	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_print_comb2();
}