/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 01:40:16 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 05:18:36 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (str[i] == '\0')
		return (&str[i]);

	while (str[i])
	{
		j = 0;
		while (str[i] != '\0' && to_find[j] != '\0')
		{
			if (str[i] == to_find[j])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
