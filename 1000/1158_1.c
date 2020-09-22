/**************************************************************
1158번
jongtae0509
C
정확한 풀이코드 길이:362 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	double a;
	scanf("%lf",&a);
	if(a>=60)
	{
	    if(a<=70)
	    {
	        printf("win");
	    }
	    else
	    {
	    	printf("lose");
		}
	}
	else if(a>=30)
	{
	    if(a<=40)
	    {
	        printf("win");
	    }
	    else
	    {
	        printf("lose");
	    }
	}
	else
	{
	    printf("lose");
	}
}
