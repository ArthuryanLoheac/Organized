/*
** EPITECH PROJECT, 2023
** sort_utiil
** File description:
** sort_utiil
*/
#include <stddef.h>
#include "structs.h"
#include "organized.h"
#include "my.h"

void egal_no_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max)
{
    if (*id_max < list_original->id) {
        max->type = list_original->type;
        max->name = list_original->name;
        *id_max = list_original->id;
    }
}

void egal_no_args_rev(linked_list_t *list_original,
    int *id_max, linked_list_t *max)
{
    if (*id_max > list_original->id) {
        max->name = list_original->name;
        max->type = list_original->type;
        *id_max = list_original->id;
    }
}
