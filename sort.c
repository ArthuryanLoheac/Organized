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

int sort(void *data, char **args)
{
    linked_list_t **element = data;

    if (args[0] == NULL)
        return 84;
    if (*element == NULL)
        return 0;
    if (my_strcmp(args[0], "ID") == 0) {
        sort_id(element, args);
        return 0;
    }
    if (my_strcmp(args[0], "TYPE") == 0) {
        sort_type(element, args);
        return 0;
    }
    if (my_strcmp(args[0], "NAME") == 0) {
        sort_name(element, args);
        return 0;
    }
    return 84;
}
