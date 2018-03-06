//PrintTree.c
#include "trees.h"
static void TreeNode_print(TreeNode *node)
{
    printf("%d ", node -> value);
}
static void Tree_printInOrder(TreeNode *node)
{
    if(node == NULL)
    {
        return;
    }
    Tree_printInOrder(node -> left);
    TreeNode_print(node);
    Tree_printInOrder(node -> right);
}

void PrintTree(TreeNode *node)
{
    printf("\n\n===== In Order =====\n");
    Tree_printInOrder(node);
}
