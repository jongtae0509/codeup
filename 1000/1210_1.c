/**************************************************************
1210번
jongtae0509
C
정확한 풀이코드 길이:832 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	if(a==1&&b==1){
		printf("angry");
	}
	else if(a==1&&b==2){
		printf("angry");
	}
	else if(a==1&&b==3){
		printf("angry");
	}
	else if(a==1&&b==4){
		printf("no angry");
	}
	else if(a==1&&b==5){
		printf("no angry");
	}
	else if(a==2&&b==1){
		printf("angry");
	}
	else if(a==2&&b==2){
		printf("angry");
	}
	else if(a==2&&b==3){
		printf("angry");
	}
	else if(a==2&&b==4){
		printf("no angry");
	}
	else if(a==2&&b==5){
		printf("no angry");
	}
	else if(a==3&&b==1){
		printf("angry");
	}
	else if(a==3&&b==2){
		printf("angry");
	}
	else if(a==3&&b==3){
		printf("no angry");
	}
	else if(a==3&&b==4){
		printf("no angry");
	}
	else if(a==3&&b==5){
		printf("no angry");
	}
	else{
		printf("no angry");
	}

}
