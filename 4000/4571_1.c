/**************************************************************
4571번
jongtae0509
C
정확한 풀이코드 길이:279 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main(){
   int m,n,i,sum=0,min=100000;
   scanf("%d %d",&m,&n);
   for(i=1;i*i<=n;i++){
        if(i*i>=m&&i*i<=n)
        {
            sum+=i*i;
            if(i*i<min){
            	min=i*i;
			}
        }
	}
	printf("%d\n%d",sum,min);
}
