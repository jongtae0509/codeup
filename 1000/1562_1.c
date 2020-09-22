/**************************************************************
1562번
jongtae0509
C
정확한 풀이코드 길이:197 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n, m;
int min(int p, int q)
{
  if(p<q){
      return p;
  }
  else{
      return q;
  }
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}
