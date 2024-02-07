/*
** EPITECH PROJECT, 2023
** get_max_id
** File description:
** get_max_id
*/
#include "structs.h"
#include <stddef.h>

int get_max_id(linked_list_t *begin)
{
    linked_list_t *tmp = begin;
    int max = -1;

    while (tmp != NULL) {
        if (tmp->id > max) {
            max = tmp->id;
        }
        tmp = tmp->next;
    }
    return max + 1;
}
