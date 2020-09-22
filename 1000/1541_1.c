/**************************************************************
1541번
jongtae0509
C
정확한 풀이코드 길이:223 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;



void f()
{
    if(n<0)
    printf("negative");
    else if(n==0)
    printf("zero");
    else
    printf("positive");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
