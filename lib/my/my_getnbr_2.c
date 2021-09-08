/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** my_getnbr_2.c
*/
#include <stdio.h>

float my_getnbr_2(char *str)
{
    float nb = 0.0;
    int i = 0;
    int idx = 0;

    while (str[idx] != 0 && str[idx] >= '0' && str[idx] <= '9')
        nb = nb * 10.0 + (str[idx++] - 48);
    idx += 1;
    if (str[idx] == '.') {
        while (str[idx] != 0) {
            nb = nb * 10.0 + (str[idx] - 48);
            i -= 1;
        }
    }
    while (i++ < 0)
        nb *= 0.1;
    return (nb);
}
