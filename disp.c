/*
** EPITECH PROJECT, 2023
** sort
** File description:
** sort
*/
#include <stddef.h>
#include "structs.h"
#include "organized.h"
#include "my.h"

int disp(void *data, char **args)
{
    linked_list_t **begin = data;

    args = args;
    if (args[0] == NULL) {
        display_list(*begin);
        return 0;
    }
    return 84;
}
