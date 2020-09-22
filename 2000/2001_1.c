/**************************************************************
2001번
jongtae0509
C
정확한 풀이코드 길이:332 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int pa,sang,pamin=1000000,sangmin=1000000;
	double sum;
	for(int i=0;i<3;i++){
		scanf("%d",&pa);
		if(pa<pamin){
			pamin=pa;
		}
	}
	for(int i=0;i<2;i++){
		scanf("%d",&sang);
		if(sang<sangmin){
			sangmin=sang;
		}
	}
	sum=sangmin+pamin;
	sum+=sum*0.1;
	printf("%.1f",sum);
	
}
