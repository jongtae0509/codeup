/**************************************************************
1356번
jongtae0509
C
정확한 풀이코드 길이:224 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0||i==n-1||j==0||j==n-1){
			printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
