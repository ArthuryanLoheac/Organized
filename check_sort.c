/*
** EPITECH PROJECT, 2023
** check_sort
** File description:
** check_sort
*/
#include <stddef.h>
#include "structs.h"
#include "organized.h"
#include "my.h"

int check_id_rev_ty(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    if (my_strcmp(args[2], "ID") == 0 && args[3] != NULL) {
        if (my_strcmp(args[3], "-r") == 0) {
            egal_no_args_rev(list_original, id_max, max);
            return 1;
        }
    }
    return 0;
}

int check_id_rev_no_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    if (my_strcmp(args[3], "ID") == 0 && args[4] != NULL) {
        if (my_strcmp(args[4], "-r") == 0) {
            egal_no_args_rev(list_original, id_max, max);
            return 1;
        }
    }
    return 0;
}

int check_id_ty_rev_no_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    if (my_strcmp(args[4], "ID") == 0 && args[5] != NULL) {
        if (my_strcmp(args[5], "-r") == 0) {
            egal_no_args_rev(list_original, id_max, max);
            return 1;
        }
    }
    return 0;
}

int check_id_ty_rev_no_args_r(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args)
{
    if (my_strcmp(args[3], "ID") == 0 && args[4] != NULL) {
        if (my_strcmp(args[4], "-r") == 0) {
            egal_no_args_rev(list_original, id_max, max);
            return 1;
        }
    }
    return 0;
}
