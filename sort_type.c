/*
** EPITECH PROJECT, 2023
** sort_type
** File description:
** sort_type
*/
#include <stddef.h>
#include "structs.h"
#include "organized.h"
#include "my.h"

static void egal_ty_no_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    int rev = 0;

    if (my_strcmp(max->name, list_original->name) < 0) {
        max->type = list_original->type;
        max->name = list_original->name;
        *id_max = list_original->id;
        return;
    }
    if (my_strcmp(max->name, list_original->name) == 0) {
        if (args[2] != NULL) {
            rev += check_id_rev_ty(list_original, id_max, max, args);
        }
        if (rev == 0) {
            egal_no_args(list_original, id_max, max);
        }
        return;
    }
}

static void rev_egal_ty_no_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    int rev = 0;

    if (my_strcmp(max->name, list_original->name) < 0) {
        max->type = list_original->type;
        max->name = list_original->name;
        *id_max = list_original->id;
    }
    if (my_strcmp(max->name, list_original->name) == 0) {
        if (args[3] != NULL) {
            rev += check_id_rev_no_args(list_original, id_max, max, args);
        }
        if (rev == 0) {
            egal_no_args(list_original, id_max, max);
        }
        return;
    }
}

static void egal_ty_no_args_rev(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    int rev = 0;

    if (my_strcmp(max->name, list_original->name) > 0) {
        max->type = list_original->type;
        max->name = list_original->name;
        *id_max = list_original->id;
    }
    if (my_strcmp(max->name, list_original->name) == 0) {
        if (args[4] != NULL) {
            rev += check_id_ty_rev_no_args(list_original, id_max, max, args);
        }
        if (rev == 0) {
            egal_no_args(list_original, id_max, max);
        }
        return;
    }
}

static void egal_ty_no_args_rev_r(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    int rev = 0;

    if (my_strcmp(max->name, list_original->name) > 0) {
        max->type = list_original->type;
        max->name = list_original->name;
        *id_max = list_original->id;
    }
    if (my_strcmp(max->name, list_original->name) == 0) {
        if (args[3] != NULL) {
            rev += check_id_ty_rev_no_args_r(list_original, id_max, max, args);
        }
        if (rev == 0) {
            egal_no_args(list_original, id_max, max);
        }
        return;
    }
}

static void egal_args(char **args, linked_list_t *list_original,
    int *id_max, linked_list_t *max)
{
    if (my_strcmp(args[1], "ID") == 0 && (args[2] == NULL ||
        my_strcmp(args[2], "-r") != 0)) {
        egal_no_args(list_original, id_max, max);
    }
    if (my_strcmp(args[1], "ID") == 0 && args[2] != NULL) {
        if (my_strcmp(args[2], "-r") == 0) {
            egal_no_args_rev(list_original, id_max, max);
        }
    }
    if (my_strcmp(args[1], "NAME") == 0 && (args[2] == NULL ||
        my_strcmp(args[2], "-r") != 0)) {
        egal_ty_no_args(list_original, id_max, max, args);
    }
    if (my_strcmp(args[1], "NAME") == 0 && args[2] != NULL) {
        if (my_strcmp(args[2], "-r") == 0) {
            egal_ty_no_args_rev_r(list_original, id_max, max, args);
        }
    }
}

static void sort_normal(linked_list_t *list_original,
    int *id_max, char **args)
{
    linked_list_t max;

    max.name = list_original->name;
    max.type = list_original->type;
    while (list_original != NULL) {
        if (list_original->type > max.type) {
            max.name = list_original->name;
            max.type = list_original->type;
            *id_max = list_original->id;
        }
        if (list_original->type == max.type && args[1] == NULL) {
            egal_no_args(list_original, id_max, &max);
        }
        if (list_original->type == max.type && args[1] != NULL) {
            egal_args(args, list_original, id_max, &max);
        }
        list_original = list_original->next;
    }
}

static void rev_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    if (my_strcmp(args[2], "NAME") == 0 && (args[3] == NULL ||
        my_strcmp(args[3], "-r") != 0)) {
        rev_egal_ty_no_args(list_original, id_max, max, args);
    }
    if (my_strcmp(args[2], "ID") == 0 && (args[3] == NULL ||
        my_strcmp(args[3], "-r") != 0)) {
        egal_no_args(list_original, id_max, max);
    }
    if (my_strcmp(args[2], "ID") == 0 && args[3] != NULL) {
        if (my_strcmp(args[3], "-r") == 0) {
            egal_no_args_rev(list_original, id_max, max);
        }
    }
    if (my_strcmp(args[2], "NAME") == 0 && args[3] != NULL) {
        if (my_strcmp(args[3], "-r") == 0) {
            egal_ty_no_args_rev(list_original, id_max, max, args);
        }
    }
}

static void sort_reverse(linked_list_t *list_original,
    int *id_max, char **args)
{
    linked_list_t max;

    max.name = list_original->name;
    max.type = list_original->type;
    while (list_original != NULL) {
        if (list_original->type < max.type) {
            max.name = list_original->name;
            max.type = list_original->type;
            *id_max = list_original->id;
        }
        if (list_original->type == max.type && args[2] == NULL) {
            egal_no_args(list_original, id_max, &max);
        }
        if (list_original->type == max.type && args[2] != NULL) {
            rev_args(list_original, id_max, &max, args);
        }
        list_original = list_original->next;
    }
}

static int get_id(linked_list_t *list_original, char **args)
{
    int id_max = 0;

    if (args[1] == NULL || my_strcmp(args[1], "-r") != 0) {
        id_max = list_original->id;
        sort_normal(list_original, &id_max, args);
    } else {
        if (my_strcmp(args[1], "-r") == 0) {
            id_max = list_original->id;
            sort_reverse(list_original, &id_max, args);
        }
    }
    return id_max;
}

void sort_type(linked_list_t **element, char **args)
{
    linked_list_t *list = initialise_list();
    linked_list_t *list_original = *element;
    int len = len_lst(list_original);
    int id_max = 0;

    for (int i = 0; i < len; i++) {
        list_original = *element;
        id_max = get_id(list_original, args);
        list_original = *element;
        while (list_original->id != id_max && list_original->next != NULL) {
            list_original = list_original->next;
        }
        push_to_list(&list, list_original->name, list_original->id,
            list_original->type);
        delete_in_list(element, id_max);
    }
    *element = list;
}
