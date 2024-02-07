/*
** EPITECH PROJECT, 2023
** push_to_list
** File description:
** push_to_list
*/
#include "structs.h"
#include "my.h"
#include <stdlib.h>

void push_to_list(linked_list_t **begin, char *name, int id, type_t type)
{
    linked_list_t *element;
    int len = my_strlen(name);

    name = name;
    element = malloc(sizeof(*element));
    element->name = malloc(sizeof(char) * len + 1);
    my_strcpy(element->name, name);
    element->id = id;
    element->type = type;
    element->next = *begin;
    *begin = element;
}
