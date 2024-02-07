/*
** EPITECH PROJECT, 2023
** display_list
** File description:
** display_list
*/
#include "my.h"
#include "structs.h"
#include <stddef.h>

void print_type(linked_list_t *tmp)
{
    if (tmp->type == WIRE) {
        mini_printf("WIRE");
    }
    if (tmp->type == ACTUATOR) {
        mini_printf("ACTUATOR");
    }
    if (tmp->type == DEVICE) {
        mini_printf("DEVICE");
    }
    if (tmp->type == PROCESSOR) {
        mini_printf("PROCESSOR");
    }
    if (tmp->type == SENSOR) {
        mini_printf("SENSOR");
    }
}

void display_list(linked_list_t *begin)
{
    linked_list_t *tmp = begin;

    while (tmp != NULL) {
        print_type(tmp);
        mini_printf(" n°%d - \"%s\"\n", tmp->id, tmp->name);
        tmp = tmp->next;
    }
}
