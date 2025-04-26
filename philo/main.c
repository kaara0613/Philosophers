#include "philo.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    t_philo philo_deta;

    if (argc < 3)
    {
        printf("missing argument.\n")
        return (0);
    }
    philo_data = get_philo_deta(argc, argv);
    if (philo_data == NULL)
    {
        printf("allocation faild.\n")
        return (0);
    }
    spawn_thread(get_philo_deta);
    free(philo_deta);
    return (0);
}
