/**************************************************************
1540번
jongtae0509
C
정확한 풀이코드 길이:176 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;



char f()
{
	if(n==0)
	printf("zero");
	else
	printf("non zero");
	return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
