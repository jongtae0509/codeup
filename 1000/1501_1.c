/**************************************************************
1501번
jongtae0509
C
정확한 풀이코드 길이:237 byte(s)
수행 시간:0 ms
메모리 :1196 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n;
	int nn[50000];
	scanf("%d",&n);
	for(int i=1;i<=n*n;i++){
		nn[i-1]=i;
	}
	for(int i=0;i<n*n;i++){
		if(i%n==0&&i!=0){
			printf("\n%d ",nn[i]);
		}
		else
		printf("%d ",nn[i]);
	}
}