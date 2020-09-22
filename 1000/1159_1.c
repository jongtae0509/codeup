/**************************************************************
1159번
jongtae0509
C
정확한 풀이코드 길이:309 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=50)
	{
	    if(a<=70)
	    {
	        printf("win");
	    }
	    else if(a%6==0)
	{
	    printf("win");
	}
	    else
	    {
	    	printf("lose");
		}
	}
	else if(a%6==0)
	{
	    printf("win");
	}
	else
	printf("lose");
}
