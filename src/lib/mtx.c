/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:48:51 by marcsilv          #+#    #+#             */
/*   Updated: 2025/07/18 22:22:28 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/structs.h"
#include "../../inc/tester.h"

int	ft_mtxlen(char **matrix)
{
	int	i;

	i = 0;
	if (!matrix || !(*matrix))
		return (0);
	while (matrix[i])
		i++;
	return (i);
}

void	ft_mtxfree(char **matrix)
{
	int	i;

	i = -1;
	if (!matrix)
		return ;
	while ((matrix)[++i])
	{
		if ((matrix)[i])
			free((matrix)[i]);
		(matrix)[i] = NULL;
	}
	free(matrix);
	matrix = NULL;
}
