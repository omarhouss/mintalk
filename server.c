/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:55:59 by ohoussai          #+#    #+#             */
/*   Updated: 2022/05/10 15:11:54 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_msg(int s)
{
	static int	i;
	static int	j;

	if (s == SIGUSR2)
	j += (1 << (7 - i));
	i++;
	if (i == 8)
	{
		ft_putchar(j);
		i = 0;
		j = 0;
	}
}

int	main(void)
{
	write(1, "PID =", 5);
	ft_putnbr(getpid());
	signal (SIGUSR2, ft_msg);
	signal (SIGUSR1, ft_msg);
	while (1)
		pause ();
}
