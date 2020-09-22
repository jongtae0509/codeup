/**************************************************************
1550번
jongtae0509
C
정확한 풀이코드 길이:277 byte(s)
수행 시간:19 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

long long int n;



unsigned long sqrt(unsigned long n)
{
	unsigned long qq = 1;
	unsigned long aa = 3;
	while(qq<=n)
	{
		qq +=aa;
		aa+=2;
	}
	return(aa/2-1);
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
