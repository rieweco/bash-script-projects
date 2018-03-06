//trees.h
#ifndef TREES_H
#define TREES_H
#include <stdio.h>
typedef struct treenode
{
    struct treenode *left;
    struct treenode *right;
    int value;
}
TreeNode;
TreeNode * Insert(TreeNode * root, int val); //insert new value
TreeNode * Search(TreeNode * root, int val); //search for value
void PrintTree(TreeNode * root);           //print tree
#endif

