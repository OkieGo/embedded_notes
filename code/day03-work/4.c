#include <stdio.h>

int main()
{
  int num;
  printf("请输入一个数字:\n");
  scanf("%d", &num);
  
  if (num % 2 == 0)
  {
    printf("这个数为偶数\n");
  }
  else
  {
    printf("这个数为奇数");
  }
}