/**************************************************************
1544번
jongtae0509
C
정확한 풀이코드 길이:177 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;



void f()
{
    for(int i=0;i<n;i++){
        printf("*");
    }
    return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
