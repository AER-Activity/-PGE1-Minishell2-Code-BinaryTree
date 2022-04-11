/*
** EPITECH PROJECT, 2022
** codeTree
** File description:
** main
*/

#include "my.h"

int main(int argc, char const *argv[])
{
    char *str = NULL;

    if (argc != 2) {
        printf("Error: Invalid number of arguments.\n");
        return (84);
    }
    tree_t *tree = init_tree_node(str, get_operators(str)); // Init first Node
    build_tree_nodes(tree); // Build the whole tree
    tree_eval(tree); // Execute the tree (browse the tree)
    return (0);
}
