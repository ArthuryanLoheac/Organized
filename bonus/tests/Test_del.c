/*
** EPITECH PROJECT, 2023
** test_del
** File description:
** test_del
*/
#include <criterion/criterion.h>
#include "organized.h"
#include "shell.h"
#include "structs.h"
#include "my.h"

Test(organized, del_void)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;

    args = malloc(sizeof(char *) * 3);
    cr_assert(del(&list, args) == 84);
}

Test(organized, del_neg)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;
    char **args_a = NULL;

    args = malloc(sizeof(char *) * 3);
    args[0] = malloc(5);
    args_a = malloc(sizeof(char *) * 3);
    args_a[0] = malloc(5);
    args_a[1] = malloc(5);
    my_strcpy(args[0], "-42");
    my_strcpy(args_a[0], "WIRE");
    my_strcpy(args_a[1], "a");
    add(&list, args_a);
    cr_assert(del(&list, args) == 84);
}

Test(organized, del_pos)
{
    linked_list_t *list = initialise_list();
    char **args = NULL;
    char **args_a = NULL;

    args = malloc(sizeof(char *) * 3);
    args[0] = malloc(5);
    args_a = malloc(sizeof(char *) * 3);
    args_a[0] = malloc(5);
    args_a[1] = malloc(5);
    my_strcpy(args[0], "42");
    my_strcpy(args_a[0], "WIRE");
    my_strcpy(args_a[1], "a");
    add(&list, args_a);
    cr_assert(del(&list, args) == 0);
}

Test(organized, del_good)
{
    linked_list_t *list = initialise_list();
    int id[2] = {1, 0};
    char **args = NULL;
    char **args_d = NULL;

    args = malloc(sizeof(char *) * 8);
    args_d = malloc(sizeof(char *) * 6);
    args[1] = malloc(5);
    args[0] = malloc(5);
    args[2] = malloc(5);
    args[3] = malloc(5);
    args[4] = malloc(5);
    args[5] = malloc(5);
    args_d[0] = malloc(5);
    my_strcpy(args[0], "WIRE");
    my_strcpy(args[1], "a");
    my_strcpy(args[2], "DEVICE");
    my_strcpy(args[3], "a");
    my_strcpy(args[4], "DEVICE");
    my_strcpy(args[5], "a");
    my_strcpy(args_d[0], "2");
    add(&list, args);
    cr_assert(del(&list, args_d) == 0);
    for(int i = 0; i < 2; i++) {
        cr_assert(list->id == id[i]);
        list = list->next;
    }
}