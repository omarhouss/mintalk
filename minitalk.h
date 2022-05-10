/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:30:46 by ohoussai          #+#    #+#             */
/*   Updated: 2022/05/10 19:35:59 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <sys/types.h>
# include <stdlib.h>

void	ft_putnbr(int n);
int		ft_atoi(const char *s);
void	ft_putchar(char c);
void	ft_chartobin(pid_t pid, char c);
void	ft_msg(int s);

#endif