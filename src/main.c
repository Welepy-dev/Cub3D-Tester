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

#include "../inc/structs.h"
#include "../inc/tester.h"
#include <stdio.h>

//./cub3D maps/mandatory.cub  

int	main(int ac, char **av)
{
	printf("Testing...\n");
	if (ac != 3)
		dprintf(2, RED "Wrong number of arguments..." RESET);

	return (0);
}
