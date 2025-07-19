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
//check if is printing in the stderr


void	test_input(t_tester *tester)
{
	char *args[] = {
		tester->valgrind_path,
		"--leak-check=full",
		"--log-file=valgrind_output.txt",
		strjoin("--log-file=", VALGRIND_OUTPUT_PATH),
		tester->program,
		NULL
	};
	execvp("valgrind", args);
}

/*void	start_tests(t_tester *tester)
{
	
}*/

int	main(int ac, char **av)
{
	t_tester	tester;

	tester.valgrind_path = get_valgrind();
	printf(GREEN "Testing...\n" RESET);
	init(&tester, ac, av);
	test_input(&tester);
	free_structs(&tester);
	return (0);
}
