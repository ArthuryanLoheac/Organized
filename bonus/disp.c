/*
** EPITECH PROJECT, 2023
** sort
** File description:
** sort
*/
#include "organized.h"

int disp(void *data, char **args)
{
    linked_list_t **begin = data;

    args = args;
    display_list(*begin);
    return 0;
}
