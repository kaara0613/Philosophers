/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:07:57 by kaara             #+#    #+#             */
/*   Updated: 2025/04/29 15:12:40 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

typedef struct s_philo	t_philo;

struct s_philo
{
	int				number_of_philosophers;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				number_of_times_each_philosopher_must_eat;
	int				count_philosophers;
	pthread_mutex_t *forks
};

long	ft_atoi(const char *str);
t_philo	get_philo_data(int argc, char **argv);
void    spawn_thread(t_philo	*philo_deta);

#endif