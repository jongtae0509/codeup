/**************************************************************
1231번
jongtae0509
C
정확한 풀이코드 길이:268 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+'){
		printf("%d",a+b);
	}
	else if(c=='-'){
		printf("%d",a-b);
	}
	else if(c=='/'){
		printf("%.2lf",(double)a/b);
	}
	else if(c=='*'){
		printf("%d",a*b);
	}
}
