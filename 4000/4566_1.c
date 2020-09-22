/**************************************************************
4566번
jongtae0509
C
정확한 풀이코드 길이:464 byte(s)
수행 시간:16 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	int m,n,i,j,sum=0,min=100000;
	scanf("%d %d",&m,&n);
	for (i=m;i<=n;i++)
    {        
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {     
                break;
            }
        }
        if (j==i)
        {
            sum+=j;
            if(min>j){
            	min=j;
			}
        }
    }
    if(sum==0){
    	printf("-1");
	}
	else{
    printf("%d\n%d",sum,min);
	}
}
