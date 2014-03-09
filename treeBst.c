#include <treeMain.h>

int bstInit()
{
    Printf("\n Initializing Bst\n");
    lib_tree->insert = bstInsert;
    lib_tree->delete = bstDelete;
    lib_tree->traverse = bstTraverse;
    lib_tree->print = bstPrint;
}

int bstInsert(int **head, int data)
{
    tree_t *temp,**temp_head = head;
    temp = calloc(sizeof(tree_t));

    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    while(*temp_head != NULL) {
        if(data < *temp_head->data)
            temp_head = &temp_head->left;
        else
            temp_head = &temp_head->right;
    }

    *temp_head = temp;
}

