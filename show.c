/********************************************************
         Description:展示家谱树信息
********************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "show.h"
#include "tree.h"
/************************************************************
           fountion:展示家谱树信息
           in: tree *root 家谱树
************************************************************/
void show(tree *root)
{
    long long int aa;
    if(root == NULL) return ;//家谱树为空
    else
    {
        for(aa = 1; aa < root->degree; aa++)
        {
            printf("        ");
        }
        printf("%s\n", root->name);
        show(root->child);//输出孩子信息
        show(root->brother);//输出兄弟信息
    }
}

