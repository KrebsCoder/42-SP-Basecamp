/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:25:51 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/07/27 14:05:23 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	u;

	u = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (u && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!u && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			u = 0;
		}
		else
			u = 1;
		i++;
	}
	return (str);
}
