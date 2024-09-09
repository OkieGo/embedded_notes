#include <stdio.h>

int main()
{
  int num, a, b, c;
  printf("请输入一个三位数:\n");
  scanf("%d", &num);

  a = num/100;
  b = num%100/10;
  c = num%10;
  
  printf("百位:%d,十位:%d,个位:%d\n", a, b, c);
}