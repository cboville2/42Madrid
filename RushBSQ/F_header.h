/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F_header.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalindo <sgalindo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 00:40:37 by cboville          #+#    #+#             */
/*   Updated: 2020/02/26 21:11:46 by sgalindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef F_HEADER_H
# define F_HEADER_H

int		ft_strlen_mod(char *buff);
int		ft_strlen_mod(char *buff);

char	*read_map(char *example_file);
char	*map_str(char *buff, char **mat, int k);
char	ft_putchar(char c);
char	map_anal(char *buff, char blank, char obstacle, char turkey);

#endif