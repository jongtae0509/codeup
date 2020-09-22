/**************************************************************
1224번
jongtae0509
C
정확한 풀이코드 길이:221 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if((double)a/b>(double)c/d){
		printf(">");
	}
	else if((double)a/b==(double)c/d){
		printf("=");
	}
	else{
		printf("<");
	}
}
