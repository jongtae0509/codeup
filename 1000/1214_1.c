/**************************************************************
1214번
jongtae0509
C
정확한 풀이코드 길이:305 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a%4==0&&a%100!=0&&b==2)
	printf("29");
	else if(a%400==0&&b==2)
	printf("29");
    else if(b==2)
    printf("28");
    else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
    printf("31");
    else
    printf("30");
	
}
