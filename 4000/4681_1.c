/**************************************************************
4681번
jongtae0509
C
정확한 풀이코드 길이:133 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("%d",(a*a+b*b+c*c+d*d+e*e)%10);
}