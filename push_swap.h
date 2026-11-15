#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stddef.h>

typedef struct s_node
{
    int   value;
    struct s_node *next;
    struct s_node *prev;
    size_t index;
}   t_node;
typedef struct s_stack
{
    struct t_node *top;
    struct t_node *bottom;
    size_t size;
}t_stack;
#endif