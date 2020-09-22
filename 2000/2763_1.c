/**************************************************************
2763번
jongtae0509
C
정확한 풀이코드 길이:219 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main()
{
   int m,n,i,check=0;
   scanf("%d %d",&m,&n);
   for(i=2;i<=n;i++)
    {
	    if(n%i==0&&m%i==0)
			check++;
	}
	if(check==0)
		printf("coprime");
	else
		printf("no");
}

