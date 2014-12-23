/*************************************************
  Copyright (C), 1994-2014, Wangxin
  File name:      choose
  Author:    Wanxin   Version: 1.0       Date: 2014.6.1
  Description:    该函数实现选择功能
  Others:         无
  Function List:  
                  1.choose
		  选择函数
		  2.my_strcmp
		  比较两个字符串相同返回0
  History:        no
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       choose
  Description:    实现功能选择
  Calls:          no
  Called By:      no
  Input:          no
  Output:         no
  Return:         0
  Others:         no
*************************************************/

void choose(link *head, link newfriend)
{
    char rec[10];
    char func[10];

    scanf("%s",func);                  //字符串用来判断
    setbuf(stdin,NULL);

    if(my_strcmp(func,"INSERT") == 0)  //判断字符串
    {
        system("reset");               //清屏
	insert(head,newfriend);        //函数调用
    }
    
    else if(my_strcmp(func,"DISPLAY") == 0)
    {
        system("reset");
	display(head,newfriend);
    }
    
    else if(my_strcmp(func,"SEARCH") == 0)
    {
        system("reset");
        search(head,newfriend);
    }
    else if(my_strcmp(func,"DELETE") == 0)
    {
        system("reset");
	delete(head,newfriend);
    }
    else if(my_strcmp(func,"EXIT") == 0)
    {
        system("reset");
	printf("退出成功，谢谢您的使用！\n");
	exit(SUCCESS);
    }
    else
    {
        printf("选择有误！\n");
        printf("请输入任意键返回主菜单或者输入“EXIT”退出程序\n");
        scanf("%s",rec);
	
	if(my_strcmp(rec,"EXIT") == 0)  //退出程序
	{
	    system("reset");
	    printf("退出成功，谢谢您的使用！\n");
	    exit(SUCCESS);
	}
	else
	{
	    system("reset");
	    interface(head,newfriend);
	}
    }
}
