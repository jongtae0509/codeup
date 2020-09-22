/**************************************************************
1549번
jongtae0509
C
정확한 풀이코드 길이:220 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

long long int n;



long long int abs(long long int a){
	if(a<0){
		return a*-1;
	}
	else{
		return a;
	}
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
