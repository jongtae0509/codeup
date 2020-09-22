/**************************************************************
1707번
jongtae0509
C++
정확한 풀이코드 길이:342 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	int n[11]={};
	int sum=0;
	int sum1=0,sum2=0;
	double a;
	for(int i=0;i<10;i++){
		scanf("%d",&n[i]);
		sum+=n[i];
	}
	printf("%.1f\n",(double)sum/10);
	a=(double)sum/10;
	for(int i=0;i<10;i++){
		if(n[i]>=a){
			sum1+=1;
		}
		else{
			sum2+=1;
		}
	}
	printf("%d %d",sum1,sum2);
	
	
}
