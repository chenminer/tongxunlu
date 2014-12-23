/*************************************************
  Copyright (C), 1994-2014, Wangxin
  File name:      count_9
  Author:    Wanxin   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现删除结点
  Others:         无
  Function List:  
                  delete
		  删除链表中的结点
  History:        no
*************************************************/

#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       delete
  Description:    删除结点
  Calls:          no
  Called By:      choose
  Input:          head 传入头指针
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void delete(link *head, link newfriend)
{
    char rec[10];
    long int id;
    int count = 0;
    char name[20];
    
    printf("请输入你要删除的好友的姓名: \n");
    gets(name);

    link temp = (*head)->next;

    while(temp != *head)
    {
         if(my_strcmp(temp->Name,name) == 0) //遍历链表
	 {
	     count++;                        //出现次数计数
	 }
	 temp = temp->next;
    }

    if(count == 0)
    {
        printf("没有这个好友！\n");
        printf("请输入任意键返回主菜单:\n");

	gets(rec);
	system("reset");
	interface(head,newfriend);   
    }

    else if(count == 1)
    {
        temp = (*head)->next;
        
	while(temp != *head)
	{
	    if((my_strcmp(temp->Name,name)) == 0)
	    {
		temp->prior->next = temp->next;       //删除结点
		temp->next->prior = temp->prior;
		printf("删除成功！\n");
		printf("请输入任意键返回主菜单:\n");
		gets(rec);
		system("reset");
		interface(head,newfriend);
	    }
	    temp = temp->next;
	}
    }
    
    else
    {
        printf("你输入的名字有下面几个人:\n");
	temp = (*head)->next;
        
	while(temp != *head)
	{
	    if(my_strcmp(temp->Name,name) == 0)   //打印结点
	    {
	        output(temp);
		printf("\n");
	    }
	    
	    temp = temp->next;
	}

	printf("请输入你要删除的好友的ID: \n");
        setbuf(stdin,NULL);
	scanf("%ld",&id);
        
	temp = (*head)->next;

	while(temp != *head)
	{
	    if(temp->Id == id)
	    {
	        temp->prior->next = temp->next;   //删除结点
		temp->next->prior = temp->prior;
		printf("删除成功！\n");
		printf("请输入任意键返回主菜单: \n");
		gets(rec);
		system("reset");
		interface(head,newfriend);
	    }
	    
	    temp = temp->next;
	}
    }
}
