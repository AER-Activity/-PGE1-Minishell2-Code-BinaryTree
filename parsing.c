/*
** EPITECH PROJECT, 2022
** -PGE1-Minishell2-Code-BinaryTree-REF
** File description:
** parsing
*/

#include "my.h"

char *fill_tree_left(char *str, int index)
{
    // Return left part of the string
}

char *fill_tree_right(char *str, int index)
{
    // Return right part of the string
}

void parse_str(parsing_t *parsing, char *str)
{
    int index = get_operator_index(parsing, str, 0);

    if (get_operators(str) == '\0')
        return;
    parsing->left = // Fill the strings with the funcs
    parsing->right = // Fill the strings with the funcs
}