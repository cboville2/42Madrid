/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 18:16:27 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 03:57:21 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char s1[] = "baaa";
	char s2[] = "bbaa";

	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	printf("\n%d", strcmp(s1, s2));
}
