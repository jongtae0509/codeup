/**************************************************************
1281번
jongtae0509
C
정확한 풀이코드 길이:335 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main(){
	int a,b,i,sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		if(i%2==0){
			sum-=i;
			printf("-%d",i);
		}
		else{
			sum+=i;
			if(i==a){
				printf("%d",i);
			}
			else{
			printf("+%d",i);
			}
		}
	}
	if(sum>0){
		printf("=+%d",sum);
	}
	else{
		printf("=%d",sum);
	}
}
