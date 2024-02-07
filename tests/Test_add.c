/*
** EPITECH PROJECT, 2023
** test_add
** File description:
** test_add
*/
#include <criterion/criterion.h>
#include "organized.h"
#include "shell.h"
#include "structs.h"
#include "my.h"

Test(organized, add_void_1)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 3);
    cr_assert(add(&list, args) == 84);
}

Test(organized, add_void_2)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 3);
    args[0] = malloc(5);
    my_strcpy(args[0], "WIRE");
    cr_assert(add(&list, args) == 84);
}

Test(organized, add_wire)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 3);
    args[0] = malloc(5);
    my_strcpy(args[0], "WIRE");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    cr_assert(add(&list, args) == 0);
}

Test(organized, add_device)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 3);
    args[0] = malloc(5);
    my_strcpy(args[0], "DEVICE");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    cr_assert(add(&list, args) == 0);
}

Test(organized, add_ACTUATOR)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 3);
    args[0] = malloc(5);
    my_strcpy(args[0], "ACTUATOR");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    cr_assert(add(&list, args) == 0);
}

Test(organized, add_SENSOR)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 3);
    args[0] = malloc(5);
    my_strcpy(args[0], "SENSOR");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    cr_assert(add(&list, args) == 0);
}

Test(organized, add_processor)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 3);
    args[0] = malloc(5);
    my_strcpy(args[0], "PROCESSOR");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    cr_assert(add(&list, args) == 0);
}

Test(organized, add_multiple)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 6);
    args[0] = malloc(5);
    my_strcpy(args[0], "PROCESSOR");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    args[2] = malloc(5);
    my_strcpy(args[2], "DEVICE");
    args[3] = malloc(5);
    my_strcpy(args[3], "a");
    cr_assert(add(&list, args) == 0);
}

Test(organized, add_multiple_err)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 6);
    args[0] = malloc(5);
    my_strcpy(args[0], "PROCESSOR");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    args[2] = malloc(5);
    my_strcpy(args[2], "DEVICE");
    cr_assert(add(&list, args) == 84);
}

Test(organized, add_other)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 6);
    args[0] = malloc(5);
    my_strcpy(args[0], "FIRE");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    args[2] = malloc(5);
    my_strcpy(args[2], "DEVICE");
    args[3] = malloc(5);
    my_strcpy(args[3], "a");
    cr_assert(add(&list, args) == 84);
}

Test(organized, add_value_id)
{
    linked_list_t *list = initialise_list();
    int id[2] = {1, 0};
    char **args = NULL;

    args = malloc(sizeof(char *) * 6);
    args[0] = malloc(5);
    my_strcpy(args[0], "WIRE");
    args[1] = malloc(5);
    my_strcpy(args[1], "a");
    args[2] = malloc(5);
    my_strcpy(args[2], "DEVICE");
    args[3] = malloc(5);
    my_strcpy(args[3], "a");
    add(&list, args);

    for(int i = 0; i < 2; i++) {
        cr_assert(list->id == id[i]);
        list = list->next;
    }
}
