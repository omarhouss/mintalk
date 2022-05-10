/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:55:54 by ohoussai          #+#    #+#             */
/*   Updated: 2022/05/10 15:32:15 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_chartobin(pid_t pid, char c)
{
	int	i;
	int	j;

	i = 7;
	while (i >= 0)
	{
		j = ((c >> i) & 1);
		if (j == 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
		i--;
	}
}

int	main(int ac, char **av)
{
	int		i;
	pid_t	pid;

	i = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (pid >= 0)
		{
			while (av[2][i])
				ft_chartobin(pid, av[2][i++]);
		}
	}
	else
		write(1, "error", 5);
}
