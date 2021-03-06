/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 20:59:33 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/28 23:25:48 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
