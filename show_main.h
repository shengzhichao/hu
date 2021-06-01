/********************************************************
         Copyright: SDUT 2018-2068
         Author: 王姗姗
         Data:2018-01-14
         Description:家谱树操作界面
         Email:17853312495@163.com
********************************************************/
#ifndef _SHOW_MAIN_H
#define _SHOW_MAIN_H
#include"tree.h"

void show_main();//家谱树操作界面

void show_find(tree *root);//查询成员信息界面66

void show_creat(tree *root);//创建家谱树界面55

void show_change(tree *root);//家谱树添加成员界面44

void show_add(tree **root);//家谱树展示33

void show_del(tree *root);//删除成员信息界面1212

/************************************************************
           fountion:展示家谱树信息
           in: tree *root 家谱树
************************************************************/
void show(tree *root);

#endif
