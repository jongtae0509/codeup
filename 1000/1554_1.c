/**************************************************************
1554번
jongtae0509
C
정확한 풀이코드 길이:226 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

double x;




long long int f(double x)
{
  long long int t=(long long int)x;

  if(t>x)
    return x-1;
  else
    return x;
}
int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}
