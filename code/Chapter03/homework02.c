#include <stdio.h>

int main()
{
  int a,b,temp;
  printf("请输入两个整数：");
  scanf("%d %d",&a,&b);
  temp = a;
  a = b;
  b = temp;
  printf("交换两个变量后 -> a:%d b:%d",a,b);
}