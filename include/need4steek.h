/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** need4steek.h
*/
#include "../lib/my.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **my_show_wordtab2(char *str, char character);

char *return_ask(void);

char *cut_lidar(char *str);

char *command_output(char *str);

int checker(char *str);

void speed(float lidar);

void direction(char **lidar_tab);

void side(float point, char *intensity);