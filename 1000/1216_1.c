/**************************************************************
1216번
jongtae0509
C
정확한 풀이코드 길이:214 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b-c){
		printf("advertise");
	}
	else if(a>b-c){
		printf("do not advertise");
	}
	else{
		printf("does not matter");
	}
}
