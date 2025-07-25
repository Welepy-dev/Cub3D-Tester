/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:48:55 by marcsilv          #+#    #+#             */
/*   Updated: 2025/07/18 22:20:09 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# define RESET "\x1b[0m"
# define RED "\x1b[31m"
# define GREEN "\x1b[32m"

typedef struct s_tester
{
	char	*program;
	int		n_args;
	char	*valgrind_path;
}	t_tester;

#endif
