
#include <stdio.h>

typedef struct tree{
    int     data;
    tree_t  *left;
    tree_t  *right;
}tree_t;

struct libtree{
    insert(tree_t *head,int data);
    delete(tree_t *head,int data);
    traverse(tree_t *head);
    print(tree_t *head);
}lib_tree;

