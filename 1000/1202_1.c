/**************************************************************
1202번
jongtae0509
C
정확한 풀이코드 길이:207 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90)
	printf("A");
	else if(a>=80)
	printf("B");
	else if(a>=70)
	printf("C");
	else if(a>=60)
	printf("D");
	else
	printf("F");
}
