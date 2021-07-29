/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 22:46:04 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/28 23:33:07 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	s = 0;
	while (src[s] != '\0' && s < nb)
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	return (dest);
}
