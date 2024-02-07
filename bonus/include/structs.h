/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Shell Boostrap
** File description:
** structs.h
*/

#ifndef STRUCTS_
    #define STRUCTS_

typedef enum type {
    ACTUATOR,
    DEVICE,
    PROCESSOR,
    SENSOR,
    WIRE
} type_t;

typedef struct linked_list_s {
    char *name;
    type_t type;
    int id;
    struct linked_list_s *next;
} linked_list_t;

#endif /* STRUCTS_ */
