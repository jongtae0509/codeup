/**************************************************************
5078번
jongtae0509
C
정확한 풀이코드 길이:310 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int a,b,c,s;
	scanf("%d %d %d",&a,&b,&c);
	s=a+b+c;
	if(a==60&&b==60&&c==60){
		printf("Equilateral");
	}
	else if(s==180&&(a==b||b==c||c==a)){
		printf("Isosceles");
	}
	else if(s==180&&(a!=b||b!=c||c!=a)){
		printf("Scalene");
	}
	else{
		printf("Error");
	}
}
