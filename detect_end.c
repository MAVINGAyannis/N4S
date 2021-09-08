/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** detect_end.c
*/
#include <stdlib.h>
#include "include/need4steek.h"

int stop_simulation(char *destination)
{
    if (my_strcmp("Track Cleared", destination) == 1) {
    command_output("STOP_SIMULATION");
    return (1);
    }
    return (0);
}

int checker(char *str)
{
    int i = my_strlen(str) - 1;
    int j;
    char *destination = malloc(sizeof(char *) * my_strlen(str));

    while (str[i] != ':' && str[i] != 0)
        i--;
    i--;
    while (str[i] != ':' && str[i] != 0)
        i--;
    i++;
    j = 0;
    while (str[i] != ':' && str[i] != 0) {
        destination[j] = str[i];
        j++;
        i++;
    }
    destination[j] = 0;
    if (stop_simulation(destination) == 1)
        return (1);
    return (0);
}
