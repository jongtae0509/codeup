/**************************************************************
1380번
jongtae0509
C
정확한 풀이코드 길이:168 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int k,i,j;
	scanf("%d",&k);
	for(i=1;i<7;i++){
		for(j=1;j<7;j++){
			if(i+j==k){
				printf("%d %d\n",i,j);
			}
		}

	}
}

