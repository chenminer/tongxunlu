/*************************************************
  Copyright (C), 1994-2014, Wangxin
  File name:      count_9
  Author:    Wanxin   Version: 1.0       Date: 2014.6.1
  Description:    该程序实现输出一个结点内容
  Others:         无
  Function List:  
                  output
		  输出一个结点内容
  History:        no
*************************************************/

#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       output
  Description:    输出一个结点内容
  Calls:          no
  Called By:      search delete
  Input:          temp  传入的结点
  Output:         no
  Return:         no
  Others:         no
*************************************************/

void output(link temp)
{
    printf("Id:        %ld\n",temp->Id);
    printf("姓名:      %s\n",temp->Name);
    printf("手机号码:  %s\n",temp->Phone_num);
    printf("家庭住址:  %s\n",temp->Address);
    printf("公司号码:  %s\n",temp->Firm_num);

}
