/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spawn_thread.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:20:51 by kaara             #+#    #+#             */
/*   Updated: 2025/04/29 15:10:52 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdlib.h>
#include <pthread.h>

void	spawn_thread(int count, t_philo *philo_deta)
{
	int			result;
	t_pthread	thread_id;

	thread_id = NULL;
	if (count > philo_deta->number_of_philosophers || count == 0)
		return ;
	philo->count_philosophers = count;
	pthread_create(&thread_id, NULL,
		thread_func, philo_deta);
	pthread_detach(thread_id);
	spawn_thread(count + 1, philo_deta);
}
