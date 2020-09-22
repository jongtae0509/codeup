/**************************************************************
1292번
jongtae0509
C
정확한 풀이코드 길이:248 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,wow,ppap;
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	wow=a+b+c+d+e+f+g+h+i+j;
	ppap=wow%7;
	if(ppap==4)
	printf("suspect");
	else
	printf("citizen");
}
