/**************************************************************
1559번
jongtae0509
C
정확한 풀이코드 길이:172 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n, m;

long long int f(int p, int q)
{
  return (long long int)p+q;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
