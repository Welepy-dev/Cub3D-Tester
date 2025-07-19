/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:06:23 by marcsilv          #+#    #+#             */
/*   Updated: 2025/07/18 22:14:47 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# define MANDATORY_MAP_PATH "assets/maps/mandatory.cub"
# define BONUS_MAP_PATH "assets/maps/bonus.cub"
# define VALGRIND_OUTPUT_PATH "output/valgrind.txt"

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# include "./structs.h"

void	free_structs(t_tester *tester);
int		ft_mtxlen(char **matrix);
void	init(t_tester *tester, int ac, char **av);
void	ft_mtxfree(char **matrix);
char	*get_valgrind(void);
void	ft_free(char **str);
char	*strjoin(char const *s1, char const *s2);

#endif // !TESTER_H
