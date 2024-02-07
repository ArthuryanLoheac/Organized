/*
** EPITECH PROJECT, 2023
** util_lst
** File description:
** util_lst
*/
#include <stddef.h>
#include "structs.h"
#include "organized.h"
#include "my.h"

int len_lst(linked_list_t *list_original)
{
    int i = 0;

    while (list_original != NULL) {
        i++;
        list_original = list_original->next;
    }
    return i;
}

void delete_in_list(linked_list_t **begin,
    int ref)
{
    linked_list_t *tmp = *begin;

    while (tmp->next != NULL) {
        if (tmp->next->id == ref) {
            tmp->next = tmp->next->next;
        } else {
            tmp = tmp->next;
        }
    }
    tmp = *begin;
    while (tmp != NULL) {
        if (tmp->id == ref) {
            *begin = tmp->next;
        }
        tmp = tmp->next;
    }
}
