#include <stdio.h>

int main()
{
  long long capacity;
  printf("请输入您的硬盘容量(GB):\n");
  scanf("%lld", &capacity);
  capacity = 1024 * 1024 * 1024 * capacity;
  printf("你的硬盘容量为:%lldB\n", capacity);
}