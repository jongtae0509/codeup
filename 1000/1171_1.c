/**************************************************************
1171번
jongtae0509
C
정확한 풀이코드 길이:397 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	long long int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b>=10&&c>=100)
	printf("%d%d%d",a,b,c);
	else if(b>=10&&c<10)
	printf("%d%d00%d",a,b,c);
	else if(b>=10&&10<=c<100)
	printf("%d%d0%d",a,b,c);
	else if(b<10&&c>=100)
	printf("%d0%d%d",a,b,c);
	else if(b<10&&c<10)
	printf("%d0%d00%d",a,b,c);
	else if(b<10&&10<=c<100)
	printf("%d0%d0%d",a,b,c);
}
