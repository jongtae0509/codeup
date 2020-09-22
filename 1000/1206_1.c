/**************************************************************
1206번
jongtae0509
C
정확한 풀이코드 길이:205 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a%b==0){
		printf("%d*%d=%d",b,a/b,a);
	}
	else if(b%a==0){
		printf("%d*%d=%d",a,b/a,b);
	}
	else{
		printf("none");
	}	
}
