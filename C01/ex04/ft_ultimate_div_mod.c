/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 00:36:49 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/25 21:19:38 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_aux;
	int	b_aux;

	a_aux = *a;
	b_aux = *b;
	*a = a_aux / b_aux;
	*b = a_aux % b_aux;
}
