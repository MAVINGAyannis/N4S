/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** direction.c
*/
#include "include/need4steek.h"

void side(float point, char *intensity)
{
    char *buff = NULL;
    size_t size = 0;

    my_printf("WHEELS_DIR:");
    if (point < 0.0)
        my_putchar('-');
    my_printf("%s", intensity);
    getline(&buff, &size, stdin);
}

void direction(char **lidar_tab)
{
    float left = my_getnbr_2(lidar_tab[1]);
    float right = my_getnbr_2(lidar_tab[31]);
    float middle = my_getnbr_2(lidar_tab[15]);

    if (middle >= 1499)
        side(left - right, "0.005\n");
    else if (middle >= 999)
        side(left - right, "0.05\n");
    else if (middle >= 599)
        side(left - right, "0.1\n");
    else if (middle >= 299)
        side(left - right, "0.2\n");
    else if (middle >= 199)
        side(left - right, "0.4\n");
    else
        side(left - right, "0.5\n");
}