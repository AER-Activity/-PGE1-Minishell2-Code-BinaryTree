/*
** EPITECH PROJECT, 2022
** codeTree
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>

// Struct used for easier parsing
typedef struct parsing_s {
    char sep;
    char *left;
    char *right;
} parsing_t;

typedef struct tree_s {
    char *str; // String containing my calcul;
    int nb; // Int containing my number
    char sep; // Char containing my operator
    struct tree_s *left; // Left part of my tree
    struct tree_s *right; // Right part of my tree
} tree_t;

// Init the tree;
tree_t *init_tree_node(char *nb, int sep);

// Build tree nodes
void build_tree_nodes(tree_t *tree);

// Parsing functions
void parse_str(parsing_t *parsing, char *str);
char *fill_tree_left(char *str, int index);
char *fill_tree_right(char *str, int index, int sep);

// Get operators by priority

// Exec my tree
int tree_eval(tree_t *tree);

// Operators related functions
int get_operator_index(parsing_t *parsing, char *buffer, int prio);
char get_operators(char *str);
int get_operator_with_priority(char *str, int prio);

#endif /* !MY_H_ */
