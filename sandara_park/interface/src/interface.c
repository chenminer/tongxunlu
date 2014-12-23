/*************************************************
  Copyright (C), 1994-2014, Wangxin
  File name:      count_9
  Author:    Wanxin   Version: 1.0       Date: 2014.5.1
  Description:    该程序实现输出一个界面
  Others:         无
  Function List:  
                  interface
		  输出一个界面
  History:        no
*************************************************/

#include <stdio.h>
#include <stdio.h>
#include "../../include/typedef.h"

/*************************************************
  Function:       count_num
  Description:    求出1－n中9的个数，返回个数
  Calls:          choose
  Called By:      main
  Input:          num 传入需要找的数字
  Output:         no
  Return:         返回9的个数
  Others:         no
*************************************************/

void interface(link *head, link newfriend)
{
    printf(" ========================================== \n");
    printf("[                                          ]\n");
    printf("[           telephone E book               ]\n");
    printf("[                            ----sandara   ]\n");
    printf("[                                       1.0]\n");
    printf("[------------------------------------------]\n");
    printf("[    1.INSERT FRIEND                       ]\n");
    printf("[                                          ]\n");
    printf("[    2.DISPLAY FRIEND                      ]\n");
    printf("[                                          ]\n");
    printf("[    3.SEARCH FRIEND                       ]\n");
    printf("[                                          ]\n");
    printf("[    4.DELETE FRIEND                       ]\n");
    printf("[                                          ]\n");
    printf("[    5.EXIT                                ]\n");
    printf(" ==========================================]\n");
    printf("INSERT/DISPLAY/SEARCH/DELETE/EXIT: \n");

    choose(head,newfriend);   //函数调用
}
