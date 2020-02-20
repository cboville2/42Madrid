/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 21:44:41 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 03:57:47 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char s1[] = "baaa";
	char s2[] = "baab";
	int n;
	
	n = 4;

	ft_strncmp(s1, s2, n);
	printf("%d", ft_strncmp(s1, s2, n));
	printf("\n%d", strncmp(s1, s2, n));
}
