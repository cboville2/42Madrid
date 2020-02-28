/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 13:29:43 by cboville          #+#    #+#             */
/*   Updated: 2020/02/27 13:33:10 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int cont;

	cont = 0;

	while (str[cont])
		cont++;
	return (cont);

}

int main()
{
	char str[] = "12345";
	printf("%d", ft_strlen(str));
}
