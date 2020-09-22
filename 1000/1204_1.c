/**************************************************************
1204번
jongtae0509
C
정확한 풀이코드 길이:258 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a==11||a==12||a==13){
	printf("%dth",a);
}
	else if(a%10==1)
	printf("%dst",a);
	else if(a%10==2)
	printf("%dnd",a);
	else if(a%10==3)
	printf("%drd",a);
	else
	printf("%dth",a);	
}
