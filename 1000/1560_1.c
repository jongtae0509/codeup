/**************************************************************
1560번
jongtae0509
C
정확한 풀이코드 길이:259 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

long long int n, m;
long long int f(long long int a,long long int b){
	if(a>b){
		return (long long int)a-b;
	}
	else{
		return (long long int)b-a;
	}
} 
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
