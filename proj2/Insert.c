//Insert.c
#include "trees.h"
#include <stdlib.h>
static TreeNode * NewNode(int val)
{
    TreeNode * node;
    node = malloc(sizeof(TreeNode));
    node -> left = NULL;
    node -> right = NULL;
    node -> value = val;
    return node;
}
TreeNode * Insert(TreeNode * node, int val)
{
    //empty tree
    if(node == NULL)
    {           
    	return NewNode(val);
    }   
    //not empty
    if(val == (node -> value))  //val is in tree, do nothing
    {
        return node;
    }
    if(val < (node -> value))   //val is left, insert val 
    {
       	node -> left = Insert(node -> left, val);
    }
    else                        //val is right, insert val
    {
       	node -> right = Insert(node -> right, val);
    }
    	return node;     
}
