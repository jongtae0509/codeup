/**************************************************************
4081번
jongtae0509
C
정확한 풀이코드 길이:333 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n!=1000&&n>0&&n<74) printf("%d blue recommend",n);
	else if(n<=1000&&n>0&&n<100) printf("%d green possible",n);
	else if(n<=1000&&n>0&&n<148) printf("%d yellow careful",n);
	else if(n<=1000&&n>0&&n>=148) printf("%d red stop",n);
	else printf("%d data error",n);
}
