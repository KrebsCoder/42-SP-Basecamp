/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:00:55 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/28 23:29:23 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	while (src[i] != '\0')
	{
		dest[s] = src[i];
		i++;
		s++;
	}
	dest[s] = '\0';
	return (dest);
}