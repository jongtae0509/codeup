/**************************************************************
1083번
jongtae0509
C
정확한 풀이코드 길이:158 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(i==3||i==6||i==9)
	printf("X ");
	else
	printf("%d ",i);
	
	}
}
