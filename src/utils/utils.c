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

void	init(t_tester *tester, int ac, char **av)
{
	if (ac != 2)
	{
		dprintf(2, RED "Wrong number of arguments...\n" RESET);
		dprintf(2, GREEN "Right input: ./tester ./executable\n" RESET);
		exit(-1);
	}
	tester->n_args = ac;
	tester->program = strdup(av[1]);
}

char	*strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (!temp)
		return (NULL);
	while (s1[j])
		temp[i++] = s1[j++];
	j = 0;
	while (s2[j])
		temp[i++] = s2[j++];
	temp[i] = '\0';
	return (temp);
}

char	*get_valgrind(void)
{
	int		status;
	FILE	*fp;
	char	buffer[128];

	status = system("which valgrind > /dev/null 2>&1");
	if (status != 0)
	{
		dprintf(2, "it's weird, your computer doesn't have valgrind\n");
		exit(status);
	}		
	fp = popen("which valgrind", "r");
	fgets(buffer, sizeof(buffer), fp);
	pclose(fp);
	return (strdup(buffer));
}

void	ft_free(char **str)
{
	if (str || *str)
		free(*str);
	*str = NULL;
}

void	free_structs(t_tester *tester)
{
	ft_free(&tester->program);
	ft_free(&tester->valgrind_path);
}
