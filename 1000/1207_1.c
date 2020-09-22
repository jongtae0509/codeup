/**************************************************************
1207번
jongtae0509
C
정확한 풀이코드 길이:717 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a==1&&b==1&&c==1&&d==1)
	printf("윷");
	else if(a==0&&b==0&&c==0&&d==0)
	printf("모");
	else if(a==1&&b==0&&c==0&&d==0)
	printf("도");
	else if(a==0&&b==1&&c==0&&d==0)
	printf("도");
	else if(a==0&&b==0&&c==1&&d==0)
	printf("도");
	else if(a==0&&b==0&&c==0&&d==1)
	printf("도");
	else if(a==1&&b==1&&c==0&&d==0)
	printf("개");
	else if(a==1&&b==0&&c==1&&d==0)
	printf("개");
	else if(a==1&&b==0&&c==0&&d==1)
	printf("개");
	else if(a==0&&b==1&&c==1&&d==0)
	printf("개");
	else if(a==0&&b==1&&c==0&&d==1)
	printf("개");
	else if(a==0&&b==0&&c==1&&d==1)
	printf("개");
	else
	printf("걸");
}
