/**************************************************************
1378번
jongtae0509
C
정확한 풀이코드 길이:175 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main()
{
	int a,b=0,i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		a=0;
		for(j=1;j<=i;j++){
			a+=j;
		}
		b+=a;
	}
	printf("%d",b);
}
