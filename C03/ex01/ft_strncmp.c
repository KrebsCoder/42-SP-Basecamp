/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:45:55 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/28 23:28:17 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	a;

	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while (*s1 != 0 && *s1 == *s2 && a < n - 1)
	{
		++s1;
		++s2;
		a++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
