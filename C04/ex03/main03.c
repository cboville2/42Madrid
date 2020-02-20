/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:38:49 by cboville          #+#    #+#             */
/*   Updated: 2020/02/20 03:55:41 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main()
{
	char *str;

	str =  "   ----+--+1234ab567";
	printf("%d", ft_atoi(str));
	printf("\n%d", atoi(str));

}