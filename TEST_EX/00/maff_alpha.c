/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:24:55 by cboville          #+#    #+#             */
/*   Updated: 2020/02/27 12:28:55 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
	char a;
	char b;

	a = 'a';
	b = 'B';

	while(a <= 'y' && b <= 'Z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a = a + 2;
		b = b + 2;
	}
	return(0);
}