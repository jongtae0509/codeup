/**************************************************************
1229번
jongtae0509
C
정확한 풀이코드 길이:584 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	double a,b,c,d;
	scanf("%lf %lf",&a,&b);
	if(a<150){
		c=a-100;
		d=(b-c)*100/c;
	if(d<=10){
		printf("정상");
	}
	else if(d<=20){
		printf("과체중");
	}
	else{
		printf("비만");
	}
	}
	else if(a<160){
		c=(a-150)/2+50;
		d=(b-c)*100/c;
	if(d<=10){
		printf("정상");
	}
	else if(d<=20){
		printf("과체중");
	}
	else{
		printf("비만");
	}
	}
	else{
		c=(a-100)*0.9;
		d=(b-c)*100/c;
	if(d<=10){
		printf("정상");
	}
	else if(d<=20){
		printf("과체중");
	}
	else{
		printf("비만");
	}
	}
}
