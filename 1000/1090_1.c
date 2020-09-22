/**************************************************************
1090번
jongtae0509
C
정확한 풀이코드 길이:182 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	long long int a,r,n,i;
	long long int nn;
	scanf("%lld %lld %lld",&a,&r,&n);
	nn=n-1;
	for(i=0;i<nn;i++){
		a=a*r;	
	}
	printf("%lld",a);
}
