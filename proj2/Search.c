//Search.c
#include "trees.h"
TreeNode * Search(TreeNode * node, int val)
{
    if(node == NULL)        //not found
    {
        return NULL;
    }
    if(node == (node -> value))
    {
        return node;        //found
    }
    if(val < (node -> value))
    {
        return Search(node -> left, val);   //search left
    }
    return Search(node -> right, val);      //search right
}
