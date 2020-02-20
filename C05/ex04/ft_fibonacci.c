/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:27:17 by cboville          #+#    #+#             */
/*   Updated: 2020/02/20 21:59:44 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int prev1;
	int prev2;
	int res;

	prev1 = 0;
	prev2 = 1;

	if (index >= 0)
	{
		res = prev1 + prev2;
		return (ft_fibonacci(index));
		prev2 = prev1;
		prev1 = res;
	}
	else
		return(-1);
}
