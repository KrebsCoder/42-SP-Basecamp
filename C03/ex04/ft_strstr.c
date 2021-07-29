/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 01:34:34 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/28 23:36:13 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	v;

	i = 0;
	if (*str != 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[0])
			{
				v = 0;
				while (str[i + v] == to_find[v])
				{
					if (to_find[v] != '\0')
						return (&str[i]);
					v++;
				}
			}
			i++;
		}
	}
	return (NULL);
}
