/**************************************************************
1357번
jongtae0509
C++
정확한 풀이코드 길이:302 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = (n - 1); i >= 1; --i) {
		for (int j = 1; j <= i; ++j) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

