//main
#include "trees.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char * argv[])
{
    TreeNode * root = NULL;
    int val;
    while(scanf("%d", &val) == 1)
    {
       // printf("insert %d\n", val);
        root = Insert(root, val);
        //PrintTree(root);
    }
    PrintTree(root);
    return EXIT_SUCCESS;
}
