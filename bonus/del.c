/*
** EPITECH PROJECT, 2023
** del
** File description:
** del
*/
#include <stddef.h>
#include "my.h"
#include "structs.h"

static void print_del(linked_list_t *tmp)
{
    char *types[5] = {"ACTUATOR", "DEVICE", "PROCESSOR",
        "SENSOR", "WIRE"};

    mini_printf("%s n°%d - \"%s\" deleted.\n", types[tmp->type],
        tmp->id, tmp->name);
}

static void delete_in_list(linked_list_t **begin,
    int ref)
{
    linked_list_t *tmp = *begin;

    while (tmp->next != NULL) {
        if (tmp->next->id == ref) {
            print_del(tmp->next);
            tmp->next = tmp->next->next;
        } else {
            tmp = tmp->next;
        }
    }
    tmp = *begin;
    while (tmp != NULL) {
        if (tmp->id == ref) {
            print_del(tmp);
            *begin = tmp->next;
        }
        tmp = tmp->next;
    }
}

static int str_to_nbr(char *str)
{
    int len = my_strlen(str);
    int value = 0;
    int i = 0;
    int mult = 1;

    if (str[0] == '-') {
        return -1;
    }
    for (int j = i; j < len - 1; j++) {
        mult *= 10;
    }
    for (int j = i; j < len; j++) {
        value += (str[j] - '0') * mult;
        mult /= 10;
    }
    return value;
}

static void delete_in_list_str(linked_list_t **begin,
    char *ref)
{
    linked_list_t *tmp = *begin;

    while (tmp->next != NULL) {
        if (my_strcmp(tmp->next->name, ref) == 0) {
            print_del(tmp->next);
            tmp->next = tmp->next->next;
        } else {
            tmp = tmp->next;
        }
    }
    tmp = *begin;
    while (tmp != NULL) {
        if (my_strcmp(tmp->name, ref) == 0) {
            print_del(tmp);
            *begin = tmp->next;
        }
        tmp = tmp->next;
    }
}

static int get_type(char *type)
{
    char *types[] = {"ACTUATOR","DEVICE",
            "PROCESSOR","SENSOR","WIRE"};
    for (int i = 0; i < 5; i++) {
        if (my_strcmp(types[i], type) == 0) {
            return i;
        }
    }
    return -1;
}

static void delete_in_list_type(linked_list_t **begin,
    char *type)
{
    linked_list_t *tmp = *begin;
    type_t ref = get_type(type);

    while (tmp->next != NULL) {
        if (tmp->next->type == ref) {
            print_del(tmp->next);
            tmp->next = tmp->next->next;
        } else {
            tmp = tmp->next;
        }
    }
    tmp = *begin;
    while (tmp != NULL) {
        if (tmp->type == ref) {
            print_del(tmp);
            *begin = tmp->next;
        }
        tmp = tmp->next;
    }
}

int del(void *data, char **args)
{
    linked_list_t **element = data;
    int nb = 0;
    int i = 0;

    if (*element == NULL || args[i] == NULL) {
        return 84;
    }
    if (my_strcmp(args[i], "NAME") == 0 && args[i + 1] != NULL) {
        i++;
        while (args[i] != NULL)
        {
            delete_in_list_str(element, args[i]);
            i++;
        }
    } else if (my_strcmp(args[i], "TYPE") == 0 && args[i + 1] != NULL) {
        i++;
        while (args[i] != NULL)
        {
            delete_in_list_type(element, args[i]);
            i++;
        }
    } else {
        while (args[i] != NULL) {
            nb = str_to_nbr(args[i]);
            if (nb == -1) {
                return 84;
            }
            delete_in_list(element, nb);
            i++;
        }
    }
    return 0;
}
