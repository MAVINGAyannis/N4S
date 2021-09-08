/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** speed.c
*/
#include "include/need4steek.h"

void speed(float lidar)
{
    char *output = NULL;

    if (lidar >= 1999)
        output = command_output("CAR_FORWARD:1.0");
    else if (lidar >= 1499)
        output = command_output("CAR_FORWARD:0.8");
    else if (lidar >= 999)
        output = command_output("CAR_FORWARD:0.5");
    else if (lidar >= 599)
        output = command_output("CAR_FORWARD:0.4");
    else if (lidar >= 399)
        output = command_output("CAR_FORWARD:0.2");
    else
        output = command_output("CAR_FORWARD:0.1");
}