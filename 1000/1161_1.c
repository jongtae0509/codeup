/**************************************************************
1161번
jongtae0509
C
정확한 풀이코드 길이:285 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a%2==0)
	printf("짝수+");
	else
	printf("홀수+");
	if(b%2==0)
	printf("짝수=");
	else
	printf("홀수=");
	c = a+b;
    if(c%2==0)
    printf("짝수");
    else
    printf("홀수");
    
}
