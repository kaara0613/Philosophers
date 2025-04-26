#include "philo.h"
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

t_philo get_philo_data(int argc, char **argv)
{
    long    tmp;
    t_philo *philo;

    philo = (t_philo *)malloc(sizeof(t_philo));
    if (philo == NULL)
    {
        printf("allocation filed.\n")
        return (NULL);
    }
	int	number_of_philosophers;
    if(!atoi_wrap(argv[0], philo->number_of_philosophers))
    {
        printf("argumennt is overflow.\n")
        return (NULL);
    }
    return (philo);
}

static bool atoi_wrap(char *input, int *result)
{
    long tmp;

    tmp = ft_atoi(input);
    if (tmp < INT_MIN || tmp > INT_MAX)
        return (false);
    result = tmp;
    return (true);
}