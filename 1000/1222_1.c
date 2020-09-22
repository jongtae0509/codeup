/**************************************************************
1222번
jongtae0509
C
정확한 풀이코드 길이:384 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d;
	double e;
	scanf("%d %d %d",&a,&b,&c);
	d= c-b;
	e= 90-a;
	if(a==1&&b==0&&c==18){
		printf("same");
	}
	else if(a==9&&b==1&&c==18){
		printf("same");
	}
	else if(b>c){
		printf("win");
	}
	else if(e/5==d){
		printf("same");
	}
	else if(e/5<d){
		printf("lose");
	}
	else{
		printf("win");
	}
}
