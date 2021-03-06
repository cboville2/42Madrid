/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 23:20:41 by cboville          #+#    #+#             */
/*   Updated: 2020/02/19 18:55:29 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] -32;
	i = 1;
	while(str[i] != '\0')
	{
		if ((!(str[i - 1] >= 65 && str[i - 1] <= 90)) 
		&& (!(str[i - 1] >= 97 && str[i - 1] <= 122)))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
