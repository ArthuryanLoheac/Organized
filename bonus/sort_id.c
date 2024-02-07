/*
** EPITECH PROJECT, 2023
** sort_id
** File description:
** sort_id
*/
#include <stddef.h>
#include "structs.h"
#include "organized.h"
#include "my.h"

static void sort_normal(linked_list_t *list_original, int *id_max)
{
    while (list_original != NULL) {
        if (list_original->id > *id_max) {
            *id_max = list_original->id;
        }
        list_original = list_original->next;
    }
}

static void sort_reverse(linked_list_t *list_original, int *id_max)
{
    while (list_original != NULL) {
        if (list_original->id < *id_max) {
            *id_max = list_original->id;
        }
        list_original = list_original->next;
    }
}

static int get_id(linked_list_t *list_original, char **args)
{
    int id_max = 0;

    if (args[1] == NULL || my_strcmp(args[1], "-r") != 0) {
        id_max = list_original->id;
        sort_normal(list_original, &id_max);
    } else {
        if (my_strcmp(args[1], "-r") == 0) {
            id_max = list_original->id;
            sort_reverse(list_original, &id_max);
        }
    }
    return id_max;
}

void sort_id(linked_list_t **element, char **args)
{
    linked_list_t *list = initialise_list();
    linked_list_t *list_original = *element;
    int len = len_lst(list_original);
    int id_max = 0;

    for (int i = 0; i < len; i++) {
        list_original = *element;
        id_max = get_id(list_original, args);
        list_original = *element;
        while (list_original->id != id_max) {
            list_original = list_original->next;
        }
        push_to_list(&list, list_original->name, list_original->id,
            list_original->type);
        delete_in_list(element, id_max);
    }
    *element = list;
}
