#include "philo.h"
#include <stdio.h>
#include <pthread.h>

int main(int argc, char **argv)
{
	t_philo			*philo_deta;
	pthread_mutex_t	*forks;

	if (argc < 4)
	{
		printf("missing argument.\n")
		return (0);
	}
	philo_data = get_philo_deta(argc, argv);
	if (philo_data == NULL)
		return (0);
	philo->forks = create_forks(philo_data);
	spawn_thread(1, philo_deta);
	free(philo_deta);
	return (0);
}
