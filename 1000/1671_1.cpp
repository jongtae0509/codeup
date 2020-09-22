/**************************************************************
1671번
jongtae0509
C++
정확한 풀이코드 길이:314 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a==b)printf("tie");
	else if(a==0&&b==1)printf("win");
	else if(a==0&&b==2)printf("lose");
	else if(a==1&&b==0)printf("lose");
	else if(a==1&&b==2)printf("win");
	else if(a==2&&b==0)printf("win");
	else if(a==2&&b==1)printf("lose");
}
