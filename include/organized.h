/*
** EPITECH PROJECT, 2023
** organized
** File description:
** organized
*/

#ifndef ORGANIZED_
    #define ORGANIZED_
    #include "structs.h"

void push_to_list(linked_list_t **begin, char *name, int id, type_t type);
void display_list(linked_list_t *begin);
int get_max_id(linked_list_t *begin);
linked_list_t *initialise_list(void);
void sort_id(linked_list_t **element, char **args);
void sort_type(linked_list_t **element, char **args);
void sort_name(linked_list_t **element, char **args);
int len_lst(linked_list_t *list_original);
void delete_in_list(linked_list_t **begin,
    int ref);
void egal_no_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max);
void egal_no_args_rev(linked_list_t *list_original,
    int *id_max, linked_list_t *max);
int check_id_rev_ty(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args);
int check_id_rev_no_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args);
int check_id_ty_rev_no_args(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args);
int check_id_ty_rev_no_args_r(linked_list_t *list_original,
    int *id_max, linked_list_t *max, char **args);

#endif /* !ORGANIZED_ */
