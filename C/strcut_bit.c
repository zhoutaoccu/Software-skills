 /******************************************************************************
  文 件 名   : strcut_bit.c
  作    者   : Zhoutaoccu
  生成日期   : 2018年8月28日
  功能描述   : 位域赋值
  1.日    期   : 2020年9月11日
    修改内容   : 创建文件
******************************************************************************/ 

#include <stdio.h>


typedef struct //位域结构体，如果位域位数总和少于数据类似长度，则按照单位数据长度大小
{                                                                                                                                
    int a:1;  
    int b:4;
    int c:28;  // 位域数超过一个int，需用2个int
}s_stu1;


int main()      
{
    s_stu1 stu1;
    stu1.a = 1;
    printf("sizeof(s_stu1) = %d\n", sizeof(s_stu1));
    printf("stu1.a = %d\n", stu1.a);
    return 0;
}
