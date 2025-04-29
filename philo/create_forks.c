/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_forks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:30:58 by kaara             #+#    #+#             */
/*   Updated: 2025/04/29 15:01:45 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <pthread.h>

pthread_mutex_t	create_forks(t_philo *philo_data)
{
	pthread_mutex_t	forks;

	forks = (pthread_mutex *)malloc(sizeof(pthread_mutex)
			* philo_data->number_of_philosophers - 1);
	if (!forks)
		return (NULL);
	return (forks);
}
