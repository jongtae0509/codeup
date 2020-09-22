/**************************************************************
1555번
jongtae0509
C
정확한 풀이코드 길이:224 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;




long long int f(long long int n) {
	long long int aa = 0;
	for (int i = 1; i <= n; i++) {
		aa += i;
	}
	return aa;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
