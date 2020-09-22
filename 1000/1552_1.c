/**************************************************************
1552번
jongtae0509
C
정확한 풀이코드 길이:161 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

double x;




double f(double t)
{
  return x-(long long int)t;
}
int main()
{
  scanf("%lf", &x);
  printf("%.14lf\n", f(x));
}
