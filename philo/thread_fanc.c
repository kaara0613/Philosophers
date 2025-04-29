#include "philo.h"

void    theread_fanc(t_philo	*philo)
{
	int count_eat;

	count_eat = 0;
	while (philo_data->number_of_times_each_philosopher_must_eat
		&& count_eat < philo_data->number_of_times_each_philosopher_must_eat)
	{
		philo_eat();
		philo_sleep();
		think_time = philo_think();
		if (is_philo_die(think_time, philo_data))
			return ;
	}
}
