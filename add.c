/*
** EPITECH PROJECT, 2023
** add
** File description:
** add
*/
#include "organized.h"
#include "structs.h"
#include "my.h"
#include <stddef.h>

static int check_wire(linked_list_t **element, char **args, int i)
{
    if (my_strcmp(args[i], "WIRE") == 0) {
        push_to_list(element, args[i + 1], get_max_id(*element), WIRE);
        mini_printf("WIRE n°%d - \"%s\" added.\n",
            get_max_id(*element) - 1, args[i + 1]);
        return 0;
    }
    return 1;
}

static int check_actuator(linked_list_t **element, char **args, int i)
{
    if (my_strcmp(args[i], "ACTUATOR") == 0) {
        push_to_list(element, args[i + 1], get_max_id(*element), ACTUATOR);
        mini_printf("ACTUATOR n°%d - \"%s\" added.\n",
            get_max_id(*element) - 1, args[i + 1]);
        return 0;
    }
    return 1;
}

static int check_device(linked_list_t **element, char **args, int i)
{
    if (my_strcmp(args[i], "DEVICE") == 0) {
        push_to_list(element, args[i + 1], get_max_id(*element), DEVICE);
        mini_printf("DEVICE n°%d - \"%s\" added.\n",
            get_max_id(*element) - 1, args[i + 1]);
        return 0;
    }
    return 1;
}

static int check_processor(linked_list_t **element, char **args, int i)
{
    if (my_strcmp(args[i], "PROCESSOR") == 0) {
        push_to_list(element, args[i + 1], get_max_id(*element), PROCESSOR);
        mini_printf("PROCESSOR n°%d - \"%s\" added.\n",
            get_max_id(*element) - 1, args[i + 1]);
        return 0;
    }
    return 1;
}

static int check_sensor(linked_list_t **element, char **args, int i)
{
    if (my_strcmp(args[i], "SENSOR") == 0) {
        push_to_list(element, args[i + 1], get_max_id(*element), SENSOR);
        mini_printf("SENSOR n°%d - \"%s\" added.\n",
            get_max_id(*element) - 1, args[i + 1]);
        return 0;
    }
    return 1;
}

static int check_everything(linked_list_t **element, char **args, int i)
{
    int j = 0;

    j += check_actuator(element, args, i);
    j += check_device(element, args, i);
    j += check_processor(element, args, i);
    j += check_sensor(element, args, i);
    j += check_wire(element, args, i);
    return j;
}

int add(void *data, char **args)
{
    linked_list_t **element = data;
    int i = 0;

    if (args[0] == NULL || args[1] == NULL) {
        return 84;
    }
    while (args[i] != NULL) {
        if (args[i + 1] == NULL) {
            return 84;
        }
        if (check_everything(element, args, i) == 5) {
            return 84;
        }
        i += 2;
    }
    return 0;
}
