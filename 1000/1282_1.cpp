/**************************************************************
1282번
jongtae0509
C++
정확한 풀이코드 길이:276 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n, k=0, t;
	scanf("%d", &n);
	while(1){
		k++;
		if(n==k*k) 
		{
			printf("%d %d",0 ,k);
			break;
		}
		else if(n<k*k)
		{
			printf("%d %d",n-(k-1)*(k-1) ,k-1);
			break;
		}	
	}	
}
