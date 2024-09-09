#include <stdio.h>

int main()
{
  double length;
  printf("请输入一个长度(英寸):\n");
  scanf("%lf", &length);
  printf("转换成厘米为:%lf厘米", length * 2.54);
}