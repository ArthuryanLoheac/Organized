/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main.c
*/
#include <stdlib.h>
#include "shell.h"
#include "my.h"
#include "structs.h"
#include "organized.h"

int main(void)
{
    linked_list_t *list = initialise_list();

    list = malloc(sizeof(linked_list_t));
    return workshop_shell(list);
}
