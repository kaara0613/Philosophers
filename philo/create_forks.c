/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_forks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:30:58 by kaara             #+#    #+#             */
/*   Updated: 2025/04/27 18:44:12 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <pthread.h>

pthread_mutex_t create_forks(t_philo *philo_data)
{
    forks = (pthread_mutex_ *)
                malloc(pthread_mutex * philo_data->number_of_philosophers);
    return (forks);
}
