/********************************************************
         Description:家谱树系统
********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "show_main.h"

int main()
{
    printf("******************************************\n\n");
    printf("            欢迎来到家谱管理系统          \n\n");
    printf("******************************************\n\n\n\n\n");
    printf("***************按ENTER键继续**************\n");
    getchar();
    system("clear");
    show_main();//家谱树展示界面

    return 0;
}

