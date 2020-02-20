/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 01:33:45 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 05:55:20 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && size > 0)
	{
		i++;
		j++;
		size--;
	}
	while (src[j] != '\0' && size > 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	src[i] = '\0';
	return (dest);
}
