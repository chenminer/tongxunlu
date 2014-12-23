/*************************************************
  Copyright (C), 1994-2014, Wangxin
  File name:      count_9
  Author:    Wanxin   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现查找好友
  Others:         无
  Function List:  
                  search
		  查找好友
  History:        no
*************************************************/

#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       search
  Description:    查找好友
  Calls:          no
  Called By:      search
  Input:          head  传入头指针
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void search(link *head, link newfriend)
{
   
    char rec[10];
    int count = 0;

    printf("请输入你要查找的好友的姓名: ");
    
    char aim_name[20];
    setbuf(stdin,NULL);
    scanf("%s",aim_name);
   
    link temp = (*head)->next;
    
    while(temp != *head)
    {
         if(my_strcmp(aim_name,temp->Name) == 0)
	 {
	     count++;
	     output(temp);
	     printf("\n");
	 }     
	 
	 temp = temp->next;
    }
    
    if(count == 0)
    {
        
	printf("查找失败！\n");
	printf("没有你要查找的好友信息！\n");
	printf("请输入任意键返回主菜单: \n");
	gets(rec);
	system("reset");
	interface(head,newfriend);
    } 
    else
    {
	printf("查找成功！\n");
	printf("请输入任意键返回主菜单: ");
	scanf("%s",rec);
	system("reset");
	interface(head,newfriend);
    }
}
