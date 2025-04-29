/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_philo_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:09:40 by kaara             #+#    #+#             */
/*   Updated: 2025/04/29 14:04:05 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

t_philo	get_philo_data(int argc, char **argv)
{
	long	tmp;
	t_philo	*philo;

	philo = (t_philo *)malloc(sizeof(t_philo));
	if (philo == NULL)
	{
		printf("allocation filed.\n")
		return (NULL);
	}
	if (!atoi_wrap(argv[1], philo->number_of_philosophers))
		return (NULL);
	if (!atoi_wrap(argv[2], philo->time_to_die))
		return (NULL);
	if (!atoi_wrap(argv[3], philo->time_to_eat))
		return (NULL);
	if (!atoi_wrap(argv[4], philo->time_to_sleep))
		return (NULL);
	if (argc == 5
		&& !atoi_wrap(argv[5],
			philo->number_of_times_each_philosopher_must_eat))
		return (NULL);
	return (philo);
}

static bool	atoi_wrap(char *input, int *result)
{
	long	tmp;

	tmp = ft_atoi(input);
	if (tmp < INT_MIN || tmp > INT_MAX)
	{
		printf("argumennt is overflow.\n");
		return (false);
	}
	result = tmp;
	return (true);
}
