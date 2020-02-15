/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 23:20:41 by cboville          #+#    #+#             */
/*   Updated: 2020/02/15 11:57:46 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 47)
		{
			i = i + 1;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		else if (str[i] == str[0])
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;

		i++;
	}
	return (str);
}
