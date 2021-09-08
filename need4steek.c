/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** need4steek.c
*/
#include "include/need4steek.h"

char *cut_lidar(char *str)
{
    int i = 0;
    int y = 0;
    char *destination = malloc(sizeof(char *) * 100);

    while (i != 3)
        if (str[y++] == ':')
            i++;
    i = 0;
    while (str[y] != 0) {
        if ((str[y] >= '0' && str[y] <= '9') ||
        str[y] == '.' || str[y] == ':') {
            destination[i] = str[y];
            i++;
        }
        y++;
    }
    destination[i - 1] = '\0';
    return (destination);
}

char *command_output(char *str)
{
    char *buff = NULL;
    size_t size = 0;

    my_printf("%s\n", str);
    getline(&buff, &size, stdin);
    return (buff);
}

void artificial_intelligence(void)
{
    char *output = NULL;
    char **lidar_tab = NULL;
    float scan = 0.0;

    output = command_output("GET_INFO_LIDAR");
    checker(output);
    output = cut_lidar(output);
    lidar_tab = my_show_wordtab2(output, ':');
    scan = my_getnbr_2(lidar_tab[15]);
    speed(scan);
    direction(lidar_tab);
}

int main(int ac, char **av)
{
    char *output = NULL;

    fflush(stdout);
    output = command_output("START_SIMULATION");
    while (1) {
        artificial_intelligence();
    }
}