/*************************************************
  Copyright (C), 1994-2014, Wangxin
  File name:      count_9
  Author:    Wanxin   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现输入一个结点
  Others:         无
  Function List:  
                  input
		  该函数实现输入一个结点
  History:        no
*************************************************/

#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       input
  Description:    输入一个结点信息
  Calls:          no
  Called By:      insert 
  Input:          newfriend
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void input(link newfriend)
{
    printf("请输入你要添加的好友信息:\n");
    printf("Id:        ");
    scanf("%ld",&(newfriend->Id));
 
    printf("姓名:     ");
    scanf("%s",newfriend->Name);

    printf("手机号码:  ");
    scanf("%s",newfriend->Phone_num);

    printf("家庭住址:  ");
    scanf("%s",newfriend->Address);

    printf("公司电话:  ");
    scanf("%s",newfriend->Firm_num);

}
