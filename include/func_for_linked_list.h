#ifndef FUNC_FOR_LINKED_LIST_H
#define FUNC_FOR_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "../include/func_for_returns_funcs.h"
#include "../include/funcs_for_str_manipulation.h"

typedef struct node
{
    char *word;
    struct node *next;
} Node;
// Function prototypes
// void remove_which_are_not_fixed(Node *node, char *list);
// void keep_which_contains(Node *node, char *list);
// void remove_words_which_arent_in_word(Node *node, char *list);
int fixed(char *list, char *word);
int contains(char *list, char *word);
int doesntContain(char *list, char *word);
void statistics(Node *ptr, int count, char *selected);
void remove_unecessary(Node *head, char *doesnt_contain, char *contain, char *fix, char *selected);

#endif // FUNC_FOR_LINKED_LIST_H