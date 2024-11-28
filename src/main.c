/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariserr <mariserr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:08:24 by mariserr          #+#    #+#             */
/*   Updated: 2024/11/28 16:30:46 by mariserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_valid_ascii(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!(s[i] > 47 && s[i] < 58) && s[i] != 45)
			return (0);
		i++;
	}
	return (1);
}

int	check_args(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_valid_ascii(av[i]) == 0
			|| ft_strncmp(av[i], "2147483648", 10) == 0
			|| ft_strncmp(av[i], "-2147483649", 11) == 0)
		{
			ft_putstr_fd(ERROR_MESSAGE);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	*stack_a;

	i = 0;
	j = 1;
	if (ac > 1)
	{
		check_args(ac, av);
	}
}
