/**************************************************************
1166번
jongtae0509
C
정확한 풀이코드 길이:164 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%4==0&&a%100!=0)
	printf("yes");
	else if(a%400==0)
	printf("yes");
	else
	printf("no");

}
